// Write a program to check if a given integer n is a power of 2 using bitwise operators.

// Input Format

// A single integer n.
// Constraints

// −10^9 ≤ n ≤ 10^9

// Output Format

// Print "Yes" if n is a power of 2.
// Print "No" otherwise.


#include <stdio.h>

int main() {

    int n; 
    scanf("%d",&n);
    
    int a =n&(n-1);
    if(n==0){
        printf("No");
    }
    
    else if(a==0){
        printf("Yes");
    }
    
    else {
        printf("No");
    }
    
    return 0;
}