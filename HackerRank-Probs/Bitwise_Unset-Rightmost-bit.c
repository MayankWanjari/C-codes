// Write a program to clear the rightmost set bit of an integer n. The result should be the number obtained after flipping the rightmost set bit to 0 while leaving other bits unchanged.

// Input Format

// A single integer n.
// Constraints

// −2^31 ≤ n ≤ 2^31
// Output Format

// Output the integer n after clearing its rightmost set bit.

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
        n=n&(n-1);
    printf("%d",n);
    return 0;
}
// second method
// #include <stdio.h>

// int main() {

//     int n;
    
//     scanf("%d",&n);
    
//     if(n%2==0){
//         n=n&(n-1);
//     }
//     else {
//         n=n ^ 1;
//     }
//     printf("%d",n);
//     return 0;
// }