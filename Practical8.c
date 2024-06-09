#include <stdio.h>
void insert(int queue[], int front, int size, int InsertItem)
{
    if (front == size)
    {
        printf("\nInsertion Operation is Not Possible : \n");
    }
    else
    {
        front = front + 1;
        queue[front] = InsertItem;
        printf("Elements of QUEUE Are : \n");
        for (int i =0; i<=front; i++)
        {
            printf("\t%i", queue[i]);
        }
    }
}
void delete(int queue[], int rear,int front, int DeleteItem)
{
    if (rear==-1)
    {
        printf("\nDeletion Operation is Not Possible : ");
    }
    else if(queue[rear]==DeleteItem)
    {
        // queue[rear]=DeleteItem;
        rear=rear+1;
        printf("Elements of QUEUE Are : \n");
        for (int i = rear; i<=front; i++)
        {
            printf("\t%i", queue[i]);
        }
    }
    else
    {
        printf("Deletion is Not Possible Because here your item not match  :\n ");
    }
    
}
int main()
{
    int queue[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50};
    int size = 10, front = 8,rear=0, InsertItem, DeleteItem;
    printf("\nEnter an Item for Insertion : ");
    scanf("%i", &InsertItem);
    insert(queue, front, size, InsertItem);
    printf("\nEnter an Etement for Deletion: ");
    scanf("%i", &DeleteItem);
    delete(queue,rear,front,DeleteItem);
    return 0;
}