#include<stdio.h>
#define size 10
int main(){
    int arr[size]={5,15,19,25,29,34,39,49,55,69};
    int low,high,mid,i,item;
    // printf("enter elements of the array1(sorted sequence)");
    // for(i=0;i<size;i++)
    // scanf("%d",&arr[i]);
    printf("enter the item to be searched");
    scanf("%d",&item);
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(item>arr[mid])
            low=mid+1;
        else if(item<arr[mid])
            high=mid-1;
        if(item==arr[mid])
        {
            printf("%d found at position %d",item,mid+1);
            break;
        }
    }
    if(low>high)
        printf("Item %d not found in array",item);
    return 0;
}