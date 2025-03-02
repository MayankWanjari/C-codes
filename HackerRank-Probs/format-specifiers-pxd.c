#include<stdio.h>

int main(){
    int a=5;

    int *c = &a;

    printf("%p %x %d",c,c,c);
}