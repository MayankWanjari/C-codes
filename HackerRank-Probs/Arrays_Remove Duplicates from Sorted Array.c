// You are given a sorted array of integers. Your task is to modify the array in-place to remove duplicate elements so that each unique element appears only once.

// The function should not return anything; instead, it must modify the given array itself.

// Function Signature

// void removeDuplicates(int arr[], int *n);
// arr[]: The sorted input array (modifies in-place).
// n: Pointer to the integer representing the size of the array (*n should be updated to the new size after removing duplicates).
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array arr such that the first k elements of arr contain the unique elements in the order they were present in arr initially. The remaining elements of arr are not important as well as the size of arr.
// Change the initial value of n as k.
// Input Format

// The input is handled by the code stub:
// The first line contains an integer n – the number of elements in the array.
// The second line contains n space-separated integers, sorted in non-decreasing order.
// Constraints

// 1 ≤ n ≤ 10⁵
// -10⁶ ≤ arr[i] ≤ 10⁶
// You must modify the given array in-place → No additional arrays should be used.
// Output Format

// The output is also handled by the stub:
// The modified array is be printed with only unique elements in order.
// The new size of the array is also be printed.

#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    if (*n == 0) return;

    int k = 0; 
    for (int i = 1; i < *n; i++) {
        if (arr[i] != arr[k]) {
            k++;
            arr[k] = arr[i];
        }
    }
    
    *n = k + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}
