/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free*/
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
    printf("Enter values to get average of : ");

    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
        
    }
    
    for(i=0;i<size;i++)
    {

        sum=sum+*(ptr+i);
    }
    printf("Sum of the number entered is %d",sum);
    free(ptr);
    return 0;
}