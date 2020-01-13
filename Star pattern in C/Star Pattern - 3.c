#include<stdio.h>

int main()
{
    for(int r = 0;r <= 5;r++) {
        for(int c = 5;c >= 1;c--) {
            if(c > r)
                printf("*");
            else
                printf(" "); }
            
        printf("\n"); }
    return 0;
}