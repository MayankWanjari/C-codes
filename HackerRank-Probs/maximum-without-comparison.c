// Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

// Input Format

// Two space-separated integers a and b.
// Constraints

// −10^9 ≤ a,b ≤ 10^9
// Output Format

// Print the smaller of the two integers.

#include <stdio.h>

int main() {
    int a, b, n;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    n = a - b;

    int sign = (n >> 31) & 1;

    int min = a * sign + b * (1 - sign);
    
    printf("%d", min);
    
    return 0;
}
// maximum without maximum "|'--'|"