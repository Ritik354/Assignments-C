/*Pointer to array concept program*/
#include <stdio.h>
int main()
{
    int (*a)[5];
    int b[5]={1,2,3,4,5};
    int i=0;
    a = &b;
    for(i=0;i<5;i++)
    {
        printf("%d",*(*a+i));

    }
    return 0;
}

// a is pinting to a[0] first element of array
//*a is pointing to a[5] block of array
//a+1 is pointing to next array block
//*(a+1) is pointing to first element of next array block