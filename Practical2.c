#include <stdio.h>
void search(int size, int Sitem)
{
    int array[100],i;
    for (i = 0; i < size; i++)
    {
        printf("Enter the element of array[%i]  =  ", i);
        scanf("%i", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (array[i] == Sitem)
        {
            printf("\n Item is found");
            printf("\n It's Present at position\t=\t%i", i);
            break;
        }
        if (i == size)
        {
            printf("\n Search is Unsuccessfull");
            break;
        }
    }
}
main()
{
    int size,Sitem;
    printf("\nEnter Search Item   =  ");
    scanf("%i",&Sitem);
    printf("Enter the size of array  =  ");
    scanf("%i", &size);
    search(size,Sitem);
}

