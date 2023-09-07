
#include<stdio.h>

int main()
{
    float f = 3.5e38;
// Here is the error because of d is out of limit
    double d = 3.5e309;

    printf("%f %lf",f ,d);

    return 0;
}