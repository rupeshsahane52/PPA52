
// usage of default arg

#include<iostream>
using namespace std;


int Sum( int a = 10,int b = 30);

int Sum(int a,int b)
{
    return(a+b);
}

int main()
{
   

    cout<<Sum()<<"\n";     // 30

    cout<<Sum(50)<<"\n";   // 50 + 30 = 80

    cout<<Sum(100,500)<<"\n";  // 100 + 500 = 600


    return 0;
}