#include <stdio.h>

int main() {
    int n1;
    scanf("%d", &n1);
    int a1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    
    int n2;
    scanf("%d", &n2);
    int a2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    
    int i = 0, j = 0;
    int printed = 0;
    int prev = -1000001;
    
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            if (a1[i] != prev) {
                if (printed) printf(" ");
                printf("%d", a1[i]);
                printed = 1;
                prev = a1[i];
            }
            i++;
        } else if (a1[i] > a2[j]) {
            if (a2[j] != prev) {
                if (printed) printf(" ");
                printf("%d", a2[j]);
                printed = 1;
                prev = a2[j];
            }
            j++;
        } else {
            if (a1[i] != prev) {
                if (printed) printf(" ");
                printf("%d", a1[i]);
                printed = 1;
                prev = a1[i];
            }
            i++;
            j++;
        }
    }
    
    while (i < n1) {
        if (a1[i] != prev) {
            if (printed) printf(" ");
            printf("%d", a1[i]);
            printed = 1;
            prev = a1[i];
        }
        i++;
    }
    
    while (j < n2) {
        if (a2[j] != prev) {
            if (printed) printf(" ");
            printf("%d", a2[j]);
            printed = 1;
            prev = a2[j];
        }
        j++;
    }
    printf("\n");
    
    i = 0, j = 0;
    printed = 0;
    prev = -1000001;
    
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            i++;
        } else if (a1[i] > a2[j]) {
            j++;
        } else {
            if (a1[i] != prev) {
                if (printed) printf(" ");
                printf("%d", a1[i]);
                printed = 1;
                prev = a1[i];
            }
            i++;
            j++;
        }
    }
    
    if (!printed) {
        printf("Intersection Not Possible");
    }
    printf("\n");
    
    return 0;
}
// important problem hai