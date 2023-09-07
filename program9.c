
#include<stdio.h>

int main(void)
{
    int a = 15 ,b = 13,c = 16,x,y;

    x = a - 3 % 2 + c * 2/4 % 2 + b/4;

     // 15 - 1 + 
     // 17


    y  = a = b + 5 - b + 9/3;

    // 13 + 5 - 13 + 3
    // 18 - 13
    // 

     printf("%d\t %d\t",x,y);

     return 0;
}