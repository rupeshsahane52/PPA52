
#include<stdio.h>

int main(void)
{

    int i = 3,j=2,k =2,l = 10, m = 1,z = 0;

    if( i == 3)         // 3 == 3 
        if(j == k)      // 2 == 2
            if(l < m)   // here is 10 is not lessthan 1
                        // so the value of z = 0
                z = 100;    // z =100 

            printf("%d\n",z);  // 100

    return 0;
}