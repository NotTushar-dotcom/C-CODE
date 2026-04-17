#include<stdio.h>
struct student {
    int id;
    char name[20];
    float percentage;
} 
record[3];
int main(){
    // clear();
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &record[i].id);
        printf("Enter Name: ");
        scanf("%19s", record[i].name);
        printf("Enter Percentage: ");
        scanf("%f", &record[i].percentage);
    }
    printf("\n\n=== Student Details ===\n");
    for (i=0; i<3; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("  ID: %d\n", record[i].id);
        printf("  Name: %s\n", record[i].name);
        printf("  Percentage: %.2f%%\n", record[i].percentage);
    }
    return 0;
}