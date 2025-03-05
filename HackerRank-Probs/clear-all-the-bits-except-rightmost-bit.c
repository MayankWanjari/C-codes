// Given an integer n, write a program to isolate the rightmost set bit in its binary representation. All other bits should be turned off except the rightmost set bit. The result should be returned as an integer.

// Input Format

// A single integer n.
// Constraints

// -10^9 <= n <= 10^9
// Output Format

// A single integer representing n with only the rightmost set bit retained.

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
    
    n=n&-n;
    
    printf("%d",n);
    
    return 0;
}