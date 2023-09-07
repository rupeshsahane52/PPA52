
#include<stdio.h>

int main()
{
    //printf("%d %d %d %d %d",sizeof(032),sizeof(0x32),sizeof(32),sizeof(32u),sizeof(32l));
        // 4   4   4 4  48 4 4 4
    
    printf("%d %d %d %d",sizeof(32.4),sizeof(32.4f),sizeof(32.4F));
            // 8 4 4  6422284
    return 0;
}