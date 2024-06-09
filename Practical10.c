#include<stdio.h>
void Insertion_Sort(int list[],int size)
{
    for(int i=0;i<size;i++)
    {
        /*sorting current element whose left side is checked for its correct posotion*/
        int temp=list[i];
        int j=i;
        /* checkwhether the adjacent element in left side is greater or less than the current element. */ 
        while(j>0 && temp<list[j-1])
        {
            //Moving the left side element to its corrext position.
            list[j]=list[j-1];
            j=j-1;
        }
        //moving current element to its correct position.
        list[j]=temp;
    }
    printf("[ ");
    for(int i=0;i<size;i++)
    {
        printf(" %i ",list[i]);
    }
    printf(" ]");
}
int main()
{
    // int list[]={2,4,9,3,7,1,8,0,6,5};
    int list[100];
    printf("Please Enter The List Elements   :\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter list[%i] = ",i);
        scanf("%i",&list[i]);
    }
    int size=10;
    printf("\nBefore Calling Funtion UnSorted List is : \n");
    printf("[ ");
    for(int i=0;i<size;i++)
    {
        printf(" %i ",list[i]);
    }
    printf(" ]");
    printf("\nAfter Calling Funtion Sorted List is : \n");
    Insertion_Sort(list,size);
    return 0;
}