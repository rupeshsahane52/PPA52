
#include<stdio.h>

int main()
{
    float  radius , area , perimeter;

    printf("Enter the radius of circle : \n");
    scanf("%f",&radius);

    area = 22.0/7 * radius *radius;

    perimeter = 2 * 22.0/7 * radius;


    printf("Area of circle : %f   \n Area of  Perirmter = %f\n",area,perimeter);

    return 0;
}