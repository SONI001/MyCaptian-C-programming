#include<stdio.h>
#include<string.h>
struct org
{
char name[30];
int age,phoneno,salary;
};
void main()
{
struct org employee[20];
int n,i;
printf("\nEnter the number of employee in your organization less than 20: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter Employee %d\nName : ",i+1);
scanf("%s",&employee[i].name);
printf("Age :",i+1);
scanf("%s",&employee[i].age);
printf("Phone number :");
scanf("%d",&employee[i].phoneno);
printf("Salary :");
scanf("%d",&employee[i].salary);
}
printf("--------------------------");
printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
printf("\nEMPLOYEE %d\n\nName : %s",i+1,employee[i].name);
printf("\nAge : %d",employee[i].age);
printf("\nPhone number : %d",employee[i].phoneno);
printf("\nSalary : %d",employee[i].salary);
}
}
