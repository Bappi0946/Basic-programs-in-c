/* Star pattern : 
*****
****
***
**
*
 Number of star is decreasing in every row 
*/

#include<stdio.h>

int main()
{
    int c,r;
    for(r = 0;r<=5;r++) {
        for(c = 1;c<=5;c++) {
        if(r < c)
            printf("*");
            else
            printf(" "); }
            printf("\n"); }
    return 0;
}