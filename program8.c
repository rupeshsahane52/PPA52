
#include<stdio.h>

int main(void)
{
    int a = 14, b ,c ;

    a = a % 5 ;  // 

    b = a % 3;  // 4

    c = a / 5 % 3;  // 


    printf("%d\t %d\t %d\t ",a,b,c);




    return 0;
}