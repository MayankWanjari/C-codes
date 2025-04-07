#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
    int a=n;
    if (n==1){
        printf("1");
    }
    else{
        printf("%d -> ",n);
    for (int i=1; a>1; i++){
        
        if(a%2==0){
            a=a/2;
        }
        else{
            a=(3*a)+1;
        }
        printf("%d",a);
        if (a>1){
            printf(" -> ");
        }
    }
    }
    
    return 0;
}