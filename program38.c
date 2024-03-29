/////////////////////////////////////////////////////////////////////////////////
// problem statement : Accept your age of years and converts into the equivqlent to no
// Input : 18
// Output : 5.68E+08
////////////////////////////////////////////////////////////////////////////////// 

/////////////////////////////////////////////////////////////////////////////
// Algorithm
////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// START
//       step 1 : enter the age
//       step 2 : age in secounds = 3.156 * 10-4 age
//        step 3: print ressults
// STOP
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//Function name : years to secounds
// Input : Integer
// Output : Integer
// Author : Rupesh Ravindra Sahane
// Date : 01/08/23
/////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
// Entry  point of Application
/////////////////////////////////////////////////////////////////////////////


int main()
{
    int age = 0;

    float age_in_sec = 0.0f;

    printf("Enter your age :? \t");
    scanf("%d",&age);

    age_in_sec = 3.156E7 * age;

    printf("Your age is %f",age_in_sec);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
// Result : 5.60000000.000000
/////////////////////////////////////////////////////////////////////////