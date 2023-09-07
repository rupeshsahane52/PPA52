
#include<stdio.h>

int main()
{
    int x  = 5, y = 10;

    int c = x++ + ++y;

    printf("the value of c is %d\n",c);

    return 0;
}