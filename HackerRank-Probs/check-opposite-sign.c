// Write a program to determine if two integers a and b have opposite signs using bitwise operators.

// Input Format

// Two space-separated integers a and b.
// Constraints

// −10^9 ≤ a,b ≤ 10^9
// Output Format

// Print "Yes" if a and b have opposite signs.
// Print "No" otherwise


#include <stdio.h>

int main() {

    int a,b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    int x= ((a>>31)&1) ^ ((b>>31)&1);
    
    if(x){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}