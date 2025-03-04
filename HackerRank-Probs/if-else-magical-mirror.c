// In the mystical kingdom of Orlon, there lies an enchanted mirror, renowned for revealing secrets of destiny. However, the mirror tests anyone who dares to stand before it by analyzing a single number. The verdict it delivers is based on a set of ancient rules, but beware—only natural numbers are entertained by the mirror!

// A number can hold one of several mystical statuses based on the following conditions:

// Condition 1: The number is even and greater than 10.
// Condition 2: The number is greater than 15 and a multiple of 3.
// Condition 3: The number is a multiple of 7.
// The mirror’s verdict is as follows:

// If the number satisfies all three conditions, it proclaims the number as "SUPERNATURAL".
// If the number satisfies exactly two conditions, it calls the number "MIRACULOUS".
// If the number satisfies exactly one condition, it deems the number "MAGICAL".
// The number is "NORMAL" if none of the magical conditions are met.
// The mirror remains silent for numbers without significance, discarding such attempts with an "INVALID" response.
// Your task is to create a program that simulates the enchanted mirror. Based on the input number, the program should output the mirror's verdict.

// Input Format

// A single integer N, the number provided to the mirror.

// Constraints

// -10^6 ≤ N ≤ 10^6

// Output Format

// A single line, "The verdict for the number [N] is: [RESULT]"


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    int condition1 = (n % 2 == 0 && n > 10);  
    int condition2 = (n > 15 && n % 3 == 0);  
    int condition3 = (n % 7 == 0);            

    int conditionsMet = condition1 + condition2 + condition3;

    if(n>0)
    {
        if (conditionsMet == 3) {
        printf("The verdict for the number %d is: SUPERNATURAL", n);
    } else if (conditionsMet == 2) {
        printf("The verdict for the number %d is: MIRACULOUS", n);
    } else if (conditionsMet == 1) {
        printf("The verdict for the number %d is: MAGICAL", n);
    } else if (conditionsMet == 0) {
        printf("The verdict for the number %d is: NORMAL", n);
    }
    }

    else
    {
        printf("The verdict for the number %d is: INVALID", n);
    }
    return 0;
}
