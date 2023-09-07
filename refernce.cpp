
// return by refernce

#include<iostream>
using namespace std;

int n;
int   &test();

int& test()
{
    
    return n;
}

int main()
{
    test() = 121;

    cout<<n;

    return 0;
}