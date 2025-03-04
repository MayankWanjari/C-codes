// Write a program to determine whether a given integer N is even or odd using only bitwise operators.

// The program should not use the modulo (%) operator.

// Input Format

// A single integer N
// Constraints

// -10^5 ≤ N ≤ 10^5
// Output Format

// Print Even if N is an even number.
// Print Odd if N is an odd number.

#include <stdio.h>

int main() {

    int num;
    
    scanf("%d",&num);
    
    if((num & 1) == 0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}