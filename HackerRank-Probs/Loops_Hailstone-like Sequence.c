#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);int max=0;
       int k=n;
    for(int i=1;n!=1;i++)
    {
        if(n>max)
            max=n;
        printf("%d -> ",n);
        if(n<1)
            n=1;
        else if(n%3==0)
            n=n/3;
        else if(n%5==0)
            n=n-5;
        else
            n=n*5;
    }
    if(k<=1)
        printf("1\nMax Number: 1");
    else
    printf("1\nMax Number: %d",max);
    
    return 0;
}