// array of pointers in structure
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct student
{
    int r_no;
    char name[20];
    char courses[20];
    int fees;
};
struct student *ptr[10];

int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        ptr[i] = (struct student*)malloc(sizeof(struct student));
        printf("\n Enter the data for student %d",i+1);
        printf("\n Roll no : ");
        scanf("%d",&ptr[i]->r_no);
        printf("\n Name: ");
        getchar();
        gets(ptr[i]->name);
        printf("\n Course: ");
        gets(ptr[i]->courses);
        printf("\n Fees: ");
        scanf("%d",&ptr[i]->fees);
    }

    printf("\n Details of students");
    for(i=0;i<2;i++)
    {
        printf("\n Roll number = %d",ptr[i]->r_no);
        printf("\n Name = %s",ptr[i]->name);
        printf("\n Coures = %s",ptr[i]->courses);
        printf("\n Fees = %d",ptr[i]->fees);
    }
    return 0;
}
