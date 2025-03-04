// Problem
// Submissions
// Leaderboard
// Discussions
// Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.

// Input Format

// The first line contains an integer n.
// The second line contains an integer i.
// Constraints

// -10^9 ≤ n ≤ 10^9
// 0 ≤ i ≤ 31
// Output Format

// Print the updated value of n after setting the i-th bit.

#include <stdio.h>

int main() {

    int num1,i;
    
    scanf("%d",&num1);
    scanf("%d",&i);
    
    int num2= 1<<i;
    
    num1 = num1 | num2;
    
    printf("%d",num1);
    
    
    return 0;
}