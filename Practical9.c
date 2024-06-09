#include <stdio.h>
#include <stdbool.h>
#define MAX 10
int list[MAX] = {11, 81, 91, 71, 51, 31, 15, 81, 19, 9};
void display()
{
    int i;
    printf("\n");
    // navigate through all Items
    printf("[");
    for (i = 0; i < MAX; i++)
    {
        printf("  %d", list[i]);
    }
    printf(" ]\n");
}
void bubbleSort()
{
    int temp, i, j;
    bool swapped = false;
    // loop through all numbers
    for (i = 0; i < MAX - 1; i++)
    {
        swapped = false;
        // loop through numbers falling ahead
        for (j = 0; j < MAX - 1 - i; j++)
        {
            printf("Items Compared:[%i,%i]", list[j], list[j + 1]);
            // check if next number is lesser than current no
            // swap the numbers.
            // Bubble up the highest number
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swapped = true;
                printf("  ==>  Elements Swapped[%i,%i].", list[j], list[j + 1]);
            }
            else
            {
                printf("  ==>  Elements Not Swapped.\n");
            }
        }
        // if not Number was swapped that means,
        // list is sorted now, Break that loop
        if(!swapped)
        {
            break;
        }
        printf("Insertion Step (%i) :=>",i+1);
        display();
    }
}

int main()
{
    printf("Input List is :=>> ");
    display();
    printf("\n");
    bubbleSort();
    printf("\nSorted List :=>> ");
    display();
    return 0;
}