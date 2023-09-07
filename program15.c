
#include<stdio.h>

int main(void)
{

    int a = 5,b= 10,temp;  // swap the values

    temp = a;
    a = b;
    b= temp;

    printf("a= %d\t, b = %d\t",a,b);

    return 0;
}