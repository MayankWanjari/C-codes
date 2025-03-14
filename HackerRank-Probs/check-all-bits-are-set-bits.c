

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n == 0) {
        printf("No\n");
        return 0;
    }

    if ((n & (n + 1)) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}