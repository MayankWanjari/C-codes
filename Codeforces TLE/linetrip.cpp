#include <stdio.h>
 
int max(int a, int b) {
    return a > b ? a : b;
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int max_gap = a[0]; // initial gap between 0 and first station
        for (int i = 1; i < n; i++) {
            max_gap = max(max_gap, a[i] - a[i-1]);
        }
        max_gap = max(max_gap, 2 * (x - a[n-1])); // last station to x and back
        
        printf("%d\n", max_gap);
    }
    return 0;
}