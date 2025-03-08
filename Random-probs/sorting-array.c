// selection sorting

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], i;

    for (i = 0; i< n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i< n - 1; i++) {
        int min = i;
        for (int j=i+ 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
