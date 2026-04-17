#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d\"n",&n);
    if(n%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("Number is even");
    goto end;
    odd:
    printf("Number is odd");
    end:
    printf("\n");
}