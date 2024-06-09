#include<stdio.h>
void TwoDArray(int row,int column)
{
    int i,j,array[10][10];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the value of array[%i][%i]   =  ",i,j);
            scanf("%i",&array[i][j]);
        }
    }
    printf("Elements of 2-D Array : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\narray[%i][%i]\t=\t%i",i,j,array[i][j]);
        }
    }
}
int main()
{
    int row,column;
    printf("\nEnter No. of Rows = ");
    scanf("%i",&row);
    printf("\nEnter No. of Columns = ");
    scanf("%i",&column);
    TwoDArray(row,column);
    return 0;
}