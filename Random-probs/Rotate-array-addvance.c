#include <stdio.h>

    void reverse(int a[],int b,int c){
        for (int i=b,j=c;i<j;i++,j--){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

int main()
{
    int n,k;
    
    scanf("%d %d",&n,&k);
    k=k%n;
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    reverse(a,0,(n-1));
    reverse(a,0,(k-1));
    reverse(a,k,(n-1));
    
    for (int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}