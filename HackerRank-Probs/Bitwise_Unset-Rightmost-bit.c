

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
        n=n&(n-1);
    printf("%d",n);
    return 0;
}

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