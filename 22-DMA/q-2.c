/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,c;
    int i,size =0,sum =0;

    printf("Enter size of array : ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

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
        sum=sum+*(ptr+i);
    }
    
    for(i=0;i<size;i++)
    {

        sum=sum+*(ptr+i);
    }
    printf("Average of the number entered is %d",sum/size);
    free(ptr);
    return 0;
}