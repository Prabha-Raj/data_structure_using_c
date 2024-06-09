#include<stdio.h>
void create(int size){
    int i,array[100];
    for(i=0;i<size;i++){
        printf("Enter the value of array[%i]\t=\t",i);
        scanf("%i",&array[i]);
    }
}

void display(int size){
    int i,array[100];
    for(i=0;i<size;i++){
        printf("\n array[%i]\t=\t%i",i,array[i]);
    }
}

main(){
    int size,array[100];
    printf("Enter Size of array = ");
    scanf("%i",&size);
    create(size);
    display(size);
    getch();
    return 0;
}