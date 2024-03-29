
///////////////////////////////////////////////////////////////////////////////////////////////////////
// problem statement : Convert SGPA to percentage
// Input : 8.70
// output : 79.5%
///////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Algorithm
///////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  START
//          step 1 : Accept  the sgpa from user
//`         step 2 : sgpa / 10 - 7.5 
//          step 3 : get the reuslt on percentage
// END
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Fucntion Name : SGPA to percentage
// Input : Integer
// Output : Integer
// Author : Rupesh ravindra Sahane.
// Date : 2/08/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////
// Enrtry point of fucntion
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float sgpa = 0.0f;

    float Result = 0.0f;


    printf("Enter the SGPA : \t");
    scanf("%f",&sgpa);

    Result = ((sgpa * 10)-7.5);

    printf("The percentage is %f",Result);



    return 0;

}

///////////////////////////////////////////////////////////////////////////////////////
// Result : 
//  Input : 8.70
//  output : 79.5
//          
/////////////////////////////////////////////////////////////////////////////////////////