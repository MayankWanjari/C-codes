

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int n = a ^ b; 
    
    if ((n != 0) && (n & (n - 1)) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}

