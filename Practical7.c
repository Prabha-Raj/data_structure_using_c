#include <stdio.h>
void push(int stack[], int top, int size, int PushItem)
{
    if (top == size)
    {
        printf("STACK Overflow ");
        printf("\nPush Operation is Not Possible : \n");
    }
    else
    {
        top = top + 1;
        stack[top] = PushItem;
        printf("Elements of STACK Are : \n");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%i", stack[i]);
        }
    }
}
void pop(int stack[], int top, int PopItem)
{
    if (top == -1)
    {
        printf("STACK Underflow ");
        printf("\nPop Operation is Not Possible : ");
    }
    else if(stack[top]==PopItem)
    {
        top = top - 1;
        printf("Elements of STACK Are : \n");
        for (int i = 
        top; i >=0; i--)
        {
            printf("\n%i", stack[i]);
        }
    }
    else
    {
        printf("\nPop Operation is Not Possible :\n ");
    }
}
int main()
{
    int stack[10] = {10, 15, 20, 25, 30, 35, 40, 45};
    int size = 10, top = 8, PushItem, PopItem;
    printf("\nEnter an Item for Pushing : ");
    scanf("%i", &PushItem);
    push(stack, top, size, PushItem);
    printf("\nEnter an Etement for Poping : ");
    scanf("%i", &PopItem);
    pop(stack, top,PopItem);
    // return 0;
}