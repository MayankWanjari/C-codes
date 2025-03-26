#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n],freq[1000]={0};
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    int max_freq = 0, result = 0;
    
    for (int i = 0; i < n; i++) {
        if (freq[a[i]] > max_freq) {
            max_freq = freq[a[i]];
            result = a[i];
        }
    }
    
    printf("%d",result);
    
    return 0;
}