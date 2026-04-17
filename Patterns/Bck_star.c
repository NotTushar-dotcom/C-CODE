#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the n");
    scanf("%d",&n);
    // This the only change in the code
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
}