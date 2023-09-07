
#include<stdio.h>

int main(void)
{

    float tempC , tempF;

    printf("Enter the tempreture in celcis : ");
    scanf("%f",&tempC);

    tempF = (tempC * 9/5) + 32;  

    printf("Tempreture in ferhaits is : %f\n",tempF);

    return 0;
}

//////////////////////////////////
// Enter the no : 25
// Tepreture in celcis : 77.0000 
///////////////////////////////////////