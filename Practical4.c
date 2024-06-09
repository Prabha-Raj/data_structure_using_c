#include<stdio.h>
void BinarySearch(int array[],int first,int last,int Sitem)
{
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(array[mid]==Sitem)
        {
            printf("\nElement is found at position %i",mid);
            break;
        }
        else if(array[mid]!=Sitem)
        {
            printf("\nElement is Not found.\n");
            break;
        }
        else if (array[mid]>Sitem)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
}
int main(){
    int array[]={10,20,30,40,50,60,70,80,90,100,120,130};
    int last=13-1,first=0,Sitem;
    printf("\nEnter the Search Item :");
    scanf("%i",&Sitem);
    BinarySearch(array,first,last,Sitem);
    return 0;
}