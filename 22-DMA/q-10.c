/*Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,c;
    int i,size =0,max =0,min ;

    printf("Enter size of array : ");
    scanf("%d",&size);

    ptr = (int*)malloc(size*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocattion Failed \n");
        return 0;
    }
    printf("\nYou entered %d values \n",size);
    printf("Enter values : ");

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
    min=*(ptr);
    for(i=0;i<size;i++)
    {
        
        if(min>*(ptr+i))
        {
            min=*(ptr+i);
        }
    }
    printf("Entered array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n Max value of the numbers entered is %d",max);
    printf("\n Min value of the numbers entered is %d",min);
    free(ptr);
    return 0;
}