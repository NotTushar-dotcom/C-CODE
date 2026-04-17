#include<stdio.h>
int main()
{
    int a[10], b[10], c[10], i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the elements of array a");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array b:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("Third Array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}