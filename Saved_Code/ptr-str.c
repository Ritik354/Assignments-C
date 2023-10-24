/*pointer and string*/
#include <stdio.h>
int length(char *p)
{
    int i;
    for(i=0;(*p+i);i++)
    {
        int i;
        for(i=0;*(p+i)!='\0';i++);
        return i;
    }
}
int main()
{
    int l;
    char str[8]={"ritik"};
    fgets(str,10,stdin);

    l =length(str);
    printf("length of the string is %d",l);
    return 0;
}