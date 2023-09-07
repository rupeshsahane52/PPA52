
#include<stdio.h>

int main()
{

    int a = 0;
    int b = 0;

    printf("The size of a is: %d\n",sizeof(a));
    printf("The size of b is :%d\n",sizeof(b));


    a = 100;
    b = 200;

    (b == a)?printf("b is equal to a\n"):printf("a is not equal to b\n");

    return 0;
}