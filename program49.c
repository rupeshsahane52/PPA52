// Logical AND opreator

#include<stdio.h>

int main()
{
    int i = 0, j = 1,k=2,l = 0;

    l = i&&j++&&k++;
    printf("values after revlaution\n");

    printf("%d %d %d %d",i,j,k,l);

    return 0;
}
// result : 0120