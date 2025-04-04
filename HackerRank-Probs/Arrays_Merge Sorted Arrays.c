#include <stdio.h>

int main() {
    
    int n1;
    scanf("%d",&n1);
    int a1[n1];
    for (int i=0;i<n1;i++) scanf("%d",&a1[i]);
    int n2;
    scanf("%d",&n2);
    int a2[n2];
    for (int i=0;i<n2;i++) scanf("%d",&a2[i]);
    
    int a[n1+n2];
    
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]) a[k++]=a1[i++];
        else a[k++]=a2[j++];
    }
    while(i<n1) a[k++]=a1[i++];
    while(j<n2) a[k++]=a2[j++];

    for (int l=0;l<n1+n2;l++) printf("%d ",a[l]); 
    
    return 0;
}