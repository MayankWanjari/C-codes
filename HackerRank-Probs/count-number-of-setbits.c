// Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.

// Input Format

// A single integer n
// Constraints

// -2^31 ≤ n ≤ 2^31
// Output Format

// Output the count of set bits in the first 4 bits of n.

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int a=n&1;
    int b=(n>>1)&1;
    int c=(n>>2)&1;
    int d=(n>>3)&1;
    
    int res=a+b+c+d;
    printf("%d", res);
    
    return 0;
}