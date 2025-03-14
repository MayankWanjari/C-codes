

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
    
    
    
    if(n<=0) {
        printf("-1");
    }
    
    else if(n>0){
        n =n&(n-1);
        if (n==0){
        printf("1");
    }
    else{
        printf("-1");
    }
      }
    return 0;
}