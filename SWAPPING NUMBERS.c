#include<stdio.h>
#include<conio.h>
int main() 
{
   int a, b;
   // here we are asking for input from user;
   printf("\nEnter Two numbers a and b for swapping: ");
   scanf("%d %d", &a, &b);
   // now swapping numbers in  variables with help of basic mathematic logic;
   a = a + b;
   b = a - b;
   a = a - b;
   // at last printing the output for our program;
   printf("\nAfter swapping value of a : %d", a);
   printf("\nAfter swapping value of b : %d", b);
 
   return (0);
}
