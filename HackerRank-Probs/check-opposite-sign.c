


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