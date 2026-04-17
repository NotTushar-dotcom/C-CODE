#include<stdio.h>
int main(){
    int n;
    for (n=1;n<=5;n++)
    {
        if (n==3)
        {
            printf("I undestand the use of break\n");
            break;
        }
        printf("number=%d\n",n);
    }
    printf("out of the loop");
}