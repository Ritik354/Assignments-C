/*Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,c;
    int i,size =0,sum =0;

    printf("Enter size of array : ");
    scanf("%d",&size);

    ptr = (int*)malloc(size*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocattion Failed \n");
        return 0;
    }

}