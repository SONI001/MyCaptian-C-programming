#include<stdio.h>
void main()
{
    int mat[20][20];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns for matrix : \n");
    scanf("%d%d",&row,&col);
    printf("---------------\n");
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("----------------------\n");
    printf("The matrix is :- \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    printf("---------------------------------\n");
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
