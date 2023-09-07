// use of global varibale and locale variable

#include<stdio.h>

int x = 10;  // global varibale inside in data 

void Demo()
{
    int B = 21;  // lcoale varibale inside in stack

    printf("The value of B is %d",B);   // 21

    printf("The value of x is %d",x);     // 10
    
  //  printf("The value of A is %d",A); // scope only for throughput function

}

int main()
{


    int A = 101;

    printf("The value of X is %d",x);  // scope only for throughput function
    printf("The value of A is %d",A);

    //printf("The value of is B %d",B); // scope only for throughput function

    Demo();


    return 0;
}