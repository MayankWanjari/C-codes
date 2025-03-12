#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y, K;
        scanf("%d %d %d", &X, &Y, &K); 

        
        int diff = (X > Y) ? (X - Y) : (Y - X);

        if (diff == K) {
            printf("0\n");
        }

        else if ((diff - K) % 2 != 0) {
            printf("-1\n");
        }
        
        else {
            if(diff-K>0)
            printf("%d\n", (diff - K) / 2);
            else printf("%d\n", (K - diff) / 2);
        }
    }

    return 0;
}