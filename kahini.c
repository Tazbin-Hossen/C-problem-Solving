#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    for(int i=0;i<4;i++)
    {
        printf("enter age: \n");
        scanf("%d",&person[i].age);
        printf("enter salary: \n");
        scanf("%f",&person[i].salary);
    }
    for(int i=0;i<4;i++)
    {
        printf("Age:%d\n",person[i].age);
        printf("Salary:%f\n",person[i].salary);
    }

}