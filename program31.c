
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept tempreture in freahit 
//
// Input : 2
// Output : -16.67
//
// Input : 16
// Output : -8.89
//
// Input : 110
// Output : 48.33
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Algorithm :
/////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////// 
// step 1: START
// step 2 : read the tempreture in ferahit
// step 3 : enterb the formulae
// step 4 : Acccept the input from user
// step 5 : get the output 
// step 6 : END
////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////
//Function Name :     CheckfreaenhitToCelecius
//  Description :     check no in freahit celecius
//  Input :           Integer
//  Output :          Integer
// Author :           Rupesh Ravindra Sahane
// Date :             1 Aug 2023
//////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
//Entry point of Program
//////////////////////////////////////////////////////////////////////
int main()
{

    float f = 0;
    float c = 0;

    printf("Enter the tempreture in fahrehit\n");
    scanf("%f",&f);

    c = 5.0/9.0*(f-32);
    
    printf("The tempreture in celcius %6.2f",c);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////
// Result: tempreture in celecius is 41.11
//////////////////////////////////////////////////////////////////////////
