#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 10
struct employee
{
    char name[30];
    char Dep[20];
    int ID;
    float Salary;

};
typedef struct employee EMP;
EMP* e;
void totalSalary(){
    char dept[10];
    float tot=0;
    printf("Enter the Dept");
    scanf("%s",dept);
    for (int i = 0; i < n ; i++)
    {
        if(strcmp((e+i)->Dep,dept)==0) tot+=(e+1)->Salary;
    }
    printf("The total salary of %s is %f\n",dept,tot);
    
}
void main(){
    int A;
    
    printf("Welcome to employee database\nHow many employees are working for you?\n");
    scanf("%d",&A);
    for (int i = 0; i < A; i++)
    {
       e=(EMP*)malloc(sizeof(EMP));
    }
    for (int i = 1; i <= A; i++)
    {
        printf("Enter the name of %d employee\n",i);
        scanf("%s",(e+i)->name);
        printf("Enter the Department of %d employee\n",i);
        scanf("%s",(e+i)->Dep);
        printf("Enter the ID of %d employee\n",i);
        scanf("%d",&(e+i)->ID);
        printf("Enter the Salary of %d employee\n",i);
        scanf("%f",&(e+i)->Salary);
    }
    for (int i = 1; i <= A; i++)
    {
        printf("\nThe name of %d employee is %s\n",i,(e+i)->name);
        printf("The Department of %d employee is %s\n",i,(e+i)->Dep);
        printf("The ID of %d employee is %d\n",i,(e+i)->ID);
        printf("The Salary of %d employee is %f\n",i,(e+i)->Salary);
       
    }
    totalSalary();

    
    


}
