
#include<stdio.h>

int main()
{

    printf("Bytes occupied by '7' = %d\n",sizeof("7"));
    printf("Bytes occupied by '0.7' = %d\n",sizeof("0.7"));
    printf("Bytes occupied by '7.0' = %d\n",sizeof("7.0"));

    return 0;
}
/* 
output : 2 unsigned int
       : 4  float
       : 4  double

*/