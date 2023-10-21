/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation*/
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
    printf("\nYou entered %d values \n",size);
    printf("Enter values to get sum of : ");

    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
        
    }
    
    for(i=0;i<size;i++)
    {
        sum=sum + *(ptr+i);
    }
    printf("Entered array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n sum of the numbers entered is %d",sum);
    free(ptr);
    return 0;
}