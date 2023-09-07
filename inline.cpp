
// inline function

#include<iostream>
using namespace std;

inline int square(int x)
{
    return x*x;
}

int main()
{
    cout<<"Square of 2 is "<<square(2)<<endl;

    cout<<"square of 10 is "<<square(10)<<endl;

    return 0;
}