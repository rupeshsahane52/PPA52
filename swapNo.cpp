

// swap values by call by reference 

#include<iostream>
using namespace std;

void swap(int* no1 ,int *no2)
{
    int temp = 0;

    temp = *no1;
    *no1 = *no2;
    *no2 = temp;
}

int main()
{
    int a = 100;
    int b =  200;

    cout<<"Beffore swapping :";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(&a,&b);

    cout<<"After swapping :";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";

    return 0;
}