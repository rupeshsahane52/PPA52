// Differrence between Pre-increment and Post-increment 

#include<stdio.h>

int main()
{
    int a = 10,b=10,c,d;

    c=++a;

    d=b++; 

    printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);

    return 0;

}
/*
Result :

a = 11
b= 11
c = 11
d = 10
*/