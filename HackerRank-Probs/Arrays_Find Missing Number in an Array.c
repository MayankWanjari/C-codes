// You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.

// Your task is to read the input, determine the missing number, and print the output.

// Input Format

// The first line contains a single integer N (size of the full sequence).
// The second line contains N-1 distinct integers in the range [1, N] in any order.
// Constraints

// 2 ≤ N ≤ 10^5
// 1 ≤ arr[i] ≤ N
// The array contains distinct integers and is missing exactly one number.
// Output Format

// Print the missing number in the sequence.
// Sample Input 0

// 7
// 3 7 1 2 6 5
// Sample Output 0

// 4

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int sum=0;
    for (int i=0;i<n-1;i++){
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    int x=((n*(n+1))/2)-sum;
    printf("%d",x);
    return 0;
}