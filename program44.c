// Differrence between Pre-decrement and Post-decrement 

#include<stdio.h>

int main()
{
    int a = 10,b=10,c,d;

    c=--a;

    d=b--; 

    printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);

    return 0;

}
/*
Result :

a = 9
b= 9
c = 9
d = 10
*/