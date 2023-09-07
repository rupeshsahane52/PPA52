
#include<stdio.h>

int main(void)
{

    int a = 3, b=4, c =3,d = 4 , x , y;

    x = (a = 5)&&(b = 7);
    y = (c = 5)||(d = 3);

    printf("a = %d\t  b = %d\t c = %d\t d = %d\t x = %d\t y = %d\t",a,b,c,d,x,y);
                                                                // 5  7  5  4 0 0 



    x = (a ==  6)&&(b = 9); // 0
    y = (c == 6)||(b = 10); // 0

     printf("\n a = %d\t  b = %d\t c = %d\t d = %d\t x = %d\t y = %d\t",a,b,c,d,x,y);    

    return 0;
}