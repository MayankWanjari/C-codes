#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    
    if(n>=2){
      for (int i=1; i<=n; i++){
        for (int k=2; k<=i; k++){
            printf(" ");
        }
        for (int j=1; j<=(n-i+1); j++){
            
            if(i==1||j==1|| j==(n-i+1)){
              printf("* ");  
            }
            else{
                printf("  ");
            }
        }
         printf("\n");
        }
    
    for(int i=2; i<=n; i++){
        for(int k=2; k<=n-i+1; k++){
            printf(" ");
        }
        for (int j=1 ; j<=i; j++){
            if(i==n|| j==1||j ==i){
              printf("* ");  
            }
            else{
                printf("  ");
            }
        }
        
        printf("\n");
    }   
    }
   else{
       printf("Shape Not Possible");
   }
    return 0;
}