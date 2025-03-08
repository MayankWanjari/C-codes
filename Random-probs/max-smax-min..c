#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],j=0;
    
    while(j<n){
        scanf("%d",&a[j]);
        j++;
    }
    int max=a[0];
    for (int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int min=a[0];
    for (int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    int max1=a[0],max2=a[0];
    for (int i=0;i<n;i++){
        if(max1<a[i]){
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i] && max!=a[i]){
            max2=a[i];
        }
    }
    printf("%d ",max);
    printf("%d ",max2);
    printf("%d",min);
    return 0;
}