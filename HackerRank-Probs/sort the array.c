#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    int count7 = 0, count8 = 0, count9 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 7) count7++;
        else if (arr[i] == 8) count8++;
        else if (arr[i] == 9) count9++;
    }
    
    int index = 0;
    while (count7--) arr[index++] = 7;
    while (count8--) arr[index++] = 8;
    while (count9--) arr[index++] = 9;
}




int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}