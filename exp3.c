
#include<stdio.h>

int main()
{
    int x = 5;

    int y = ++x + 3  + 2 + x++;   // 6 * 3 + 2 + 5

    printf("The value of x  is : %d\n",x);
    printf("The value of y  is : %d\n",y);



    return 0;

}


