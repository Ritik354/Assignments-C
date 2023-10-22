/*srting of array in c program*/
#include <stdio.h>
void main()
{
    char* name[]={"amit","akhil","ankit","amar"};
    int i=0;

    for(i=0;i<4;i++)
    {
        printf("%s\n",name[i]);
    }

}