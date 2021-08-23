// using alternate technique to access structure pointer
#include<stdio.h>
struct student
{
    int r_no;
    char name[20];
    char course[20];
    float fees;
};
int main()
{
    struct student *ptr_stud1;
    struct student stud1 = {01, "Mahudoom Naina", "B.Tech IT",55000};
    ptr_stud1 = &stud1;

    printf("\n Detail of student: ");
    printf("\n Roll no: %d",ptr_stud1->r_no);
    printf("\n Name : %s",ptr_stud1->name);
    printf("\n Course : %s",ptr_stud1->course);
    printf("\n Fees : %.2f",ptr_stud1->fees);
    return 0;
}
