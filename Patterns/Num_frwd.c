#include<stdio.h>
int main(){
    int i,j,n,p=1;
    printf("Enter the n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("4%d",p++);
        printf("\n");
    }
    return 0;
}