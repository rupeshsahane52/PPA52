
#include<stdio.h>

int main(void)
{

    int x,y,z, k =10;

    k += (x= 5,y = x + 2,z = x + y);

    printf("x = %d\t y = %d\t  z = %d\t k = %d\t ",x,y,z,k);

    // k = 10 (5,7   12)
    // 10 + 12

    // 5 7 12 22
    return 0;
}