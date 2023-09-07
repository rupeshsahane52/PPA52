// sizeof opreator

#include<stdio.h>

int main()
{
    int a = 1,b=0;

    b=sizeof(++a);

    printf("%d %d",a,b);

    return 0;
}
//////////////////////////////////////////////
// Result : 1 4
////////////////////////////////////////////