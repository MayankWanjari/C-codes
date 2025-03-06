// REVERSING AN ARRAY

#include <stdio.h>

    int palindrome(int* a,int n){
            for (int i=0,j=n-1;i<j;i++,j--){
                if(a[i]!=a[j]) {
                    return 0;
            }
            
        }
    return 1;
    }

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    (palindrome(a,n))? printf("is palin"):printf("is not palin");

    return 0;
}