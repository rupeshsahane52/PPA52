
#include<stdio.h>

int main(void)
{

    int a =2, b=2 , x , y;

    x = 4 * (++a * 2 + 3);

    y = 4 * (b++ * 2 + 3);

    printf("a = %d\t b = %d\t x = %d\t y = %d\t",a,b,x,y);

    return 0;
}