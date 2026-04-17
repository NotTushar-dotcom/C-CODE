#include<stdio.h>
#define size 10
int main(){
    int i, item;
    int arr[size]={1,5,88,99,64,72,37,15,64,69};
    printf("enter the item to be searched");
    scanf("%d",&item);
    for(i=0;i<size;i++)
    {
        if(item==arr[i])
        {
            printf("%d Found at position %d\n",item,i+1);
            break;
        }
    }

    if(i==size)
    {
        printf("item %d not found in array\n",item);
    }
}