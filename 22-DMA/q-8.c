/*Write a program to demonstrate dangling pointers in C*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr =(int *)malloc(sizeof(int));
    *ptr =10;
    printf("Before Free %d\n",*ptr);

    free(ptr);

    printf("Anter Free %d",ptr);
    return 0;
}