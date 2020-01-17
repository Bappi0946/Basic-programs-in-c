#include<stdio.h>

void sample3(int,int,int);
void sample4();
int main()
{
    int f = 7,t = 2,j = 0;
    sample3(f,t,j);
    f = 6;
    j = f;   
    sample3(f,t,j);
    f = f - 1;
    t = t + 2;
    j = f;
    sample3(f,t,j);
    sample4();
    f = f - 2;
    t = t + 4;
    j = f;   
    sample3(f,t,j);
    f = f - 1;
    t = t + 2;
    j = f;
    sample3(f,t,j);
      f = f - 1;
    t = t + 2;
    j = f;
    sample3(f,t,j);
    return 0;
}

void sample3(int k,int n,int d) {

    for(int c = 1;c <= 13;c++)
        if(c == k) {
            printf("*");
            if(k == d)
            k = k + n; }
        else
            printf(" "); 
        printf("\n"); }

void sample4() {
    int c;
    for(c = 1;c <= 10;c++) {
        if(c > 3) {
            if(c <= 10) 
            printf("*");
             
            else
            printf(" "); } 
        else
        printf(" ");  }
            printf("\n"); }  