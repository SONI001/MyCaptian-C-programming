include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	printf("ENTER YOUR MARKS FOR GRADING : ");
	scanf("%d",&marks);
	
	if(marks<0 || marks>100)
	{
		printf("\n INVAILD ENTRY");
	}
	else if(marks<40)
	{
		printf("\n YOUR GRADE IS F");
	}
	else if(marks>40 && marks<=54)
	{
		printf("\n YOUR GRADE IS D");
	}
	else if(marks>54 && marks<=69)
	{
		printf("\n YOUR GRADE IS C");
	}
	else if(marks>69 && marks<=84)
	{
		printf("\n YOUR GRADE IS B");
	}
	else if(marks>84 && marks<=100)
	{
		printf("\n YOUR GRADE IS A");
	}
}
