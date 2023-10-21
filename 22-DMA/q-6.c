/*Write a program in C to find the largest element using Dynamic Memory Allocation*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,c;
    int i,size =0,max =0;

    printf("Enter size of array : ");
    scanf("%d",&size);

    ptr = (int*)malloc(size*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocattion Failed \n");
        return 0;
    }
    printf("\nYou entered %d values \n",size);
    printf("Enter values to get max of : ");

    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
        
    }
    
    for(i=0;i<size;i++)
    {
        
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }
    }
    printf("Entered array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n Max value of the numbers entered is %d",max);
    free(ptr);
    return 0;
}