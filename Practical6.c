#include <stdio.h>
void SumOfTwoMatrices(int orderOfm1, int orderOfm2)
{
    int i, j, array1[10][10], array2[10][10], Neworder;
    printf("Enter Elements of First Matrix   :  \n");
    for (i = 0; i < orderOfm1; i++)
    {
        for (j = 0; j < orderOfm1; j++)
        {
            printf("Enter the value of array1[%i][%i]   =  ", i, j);
            scanf("%i", &array1[i][j]);
        }
    }
    printf("\n First Matrix is : \n\n");
    for (i = 0; i < orderOfm1; i++)
    {
        for (j = 0; j < orderOfm1; j++)
        {
            printf("\t%i", array1[i][j]);
        }
        printf("\n\n");
    }
    printf("Enter Elements of Second Mtrix : \n");
    for (i = 0; i < orderOfm2; i++)
    {
        for (j = 0; j < orderOfm2; j++)
        {
            printf("Enter the value of array2[%i][%i]   =  ", i, j);
            scanf("%i", &array2[i][j]);
        }
    }
    printf("\n Second Matrix is : \n\n");
    for (i = 0; i < orderOfm2; i++)
    {
        for (j = 0; j < orderOfm2; j++)
        {
            printf("\t%i", array2[i][j]);
        }
        printf("\n\n");
    }
    // for Sum Of Two Matrices
    if (orderOfm1 == orderOfm2)
    {
        Neworder = orderOfm1; // or orderOfm2;
        printf("The Sum of Two Matrices : \n");
        for (i = 0; i < Neworder; i++)
        {
            for (j = 0; j < Neworder; j++)
            {
                printf("\t%i", array1[i][j] + array2[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("Not Possible Sum Of These Matrices , Because Orders are differents :");
    }
}
int main()
{
    int orderOfm1, orderOfm2;
    printf("\nEnter Order of first Matrix = ");
    scanf("%i", &orderOfm1);
    printf("\nEnter Order of Second Matrix = ");
    scanf("%i", &orderOfm2);
    SumOfTwoMatrices(orderOfm1, orderOfm2);
    return 0;
}