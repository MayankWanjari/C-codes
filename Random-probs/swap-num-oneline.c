// easy peasy

#include <stdio.h>

int main()
{
    int a=7,b=9;
    
    a=a^b;
    b=a^b;
    a=a^b;
    a = (b = (a ^= b) ^ b) ^ a;  // Single-line swap
    a = a + b;  // Step 1: a becomes 7 + 9 = 16
    b = a - b;  // Step 2: b becomes 16 - 9 = 7 (original value of a)
    a = a - b;  // Step 3: a becomes 16 - 7 = 9 (original value of b)
    a = a + b - (b = a);  // One-line swap
    printf("%d %d",a,b);
    return 0;
}