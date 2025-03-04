// You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

// Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

// Your task is to apply these changes and return the final passcode that will successfully open the vault.

// Note: After the number 9, the dial wraps around back to 0.

// Input Format

// Space separated 10-digit vault configuration with 3 wrong digits.
// Three pairs in new line provided, each pair on a new line. Each pair contains:
// The index of the incorrect digit (0-indexed).
// The number by which the dial must be rotated to correct it.
// Constraints

// All inputs are digits from 0 to 9

// Output Format

// Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.


#include <stdio.h>

int main() {

    int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);
    int b1,b2,c1,c2,d1,d2;
    scanf("%d %d",&b1,&b2);
     scanf("%d %d",&c1,&c2);
     scanf("%d %d",&d1,&d2);
    if(b1==0)
        a0=(a0+b2)%10;
    else if(b1==1)
        a1=(a1+b2)%10;
    else if(b1==2)
        a2=(a2+b2)%10;
    else if(b1==3)
        a3=(a3+b2)%10;
    else if(b1==4)
        a4=(a4+b2)%10;
    else if(b1==5)
        a5=(a5+b2)%10;
    else if(b1==6)
        a6=(a6+b2)%10;
    else if(b1==7)
        a7=(a7+b2)%10;
    else if(b1==8)
        a8=(a8+b2)%10;
    else if(b1==9)
        a9=(a9+b2)%10;
    
    if(c1==0)
        a0=(a0+c2)%10;
    else if(c1==1)
        a1=(a1+c2)%10;
    else if(c1==2)
        a2=(a2+c2)%10;
    else if(c1==3)
        a3=(a3+c2)%10;
    else if(c1==4)
        a4=(a4+c2)%10;
    else if(c1==5)
        a5=(a5+c2)%10;
    else if(c1==6)
        a6=(a6+c2)%10;
    else if(c1==7)
        a7=(a7+c2)%10;
    else if(c1==8)
        a8=(a8+c2)%10;
    else if(c1==9)
        a9=(a9+c2)%10;
    
    if(d1==0)
        a0=(a0+d2)%10;
    else if(d1==1)
        a1=(a1+d2)%10;
    else if(d1==2)
        a2=(a2+d2)%10;
    else if(d1==3)
        a3=(a3+d2)%10;
    else if(d1==4)
        a4=(a4+d2)%10;
    else if(d1==5)
        a5=(a5+d2)%10;
    else if(d1==6)
        a6=(a6+d2)%10;
    else if(d1==7)
        a7=(a7+d2)%10;
    else if(d1==8)
        a8=(a8+d2)%10;
    else if(d1==9)
        a9=(a9+d2)%10;
    
    printf("%d %d %d %d %d %d %d %d %d %d",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
    return 0;
}