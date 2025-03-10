// Write a program to swap two integers using only the bitwise XOR operator without using a temporary variable.

// The program should take two integers, A and B, as input and output the swapped values.

// Input Format

// The first line contains an integer A
// The second line contains an integer B
// Constraints

// (-10^5 ≤ A ≤ 10^5)
// (-10^5 ≤ B ≤ 10^5)
// Output Format

// The first line contains the swapped value of A.
// The second line contains the swapped value of B.

// swap code

#include <stdio.h>

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);
    
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;
    
    printf("%d\n", A);
    printf("%d\n", B);

    return 0;
}
