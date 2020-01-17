#include<stdio.h>

void B(void);
void A(void);
void P();
void I(void);
void sample(void);
void sample1(void);
void sample3(int,int,int);
void sample4(void);
void sample5(void);
void sample6(void);

int main()
{
    B();
    printf("\n");
    A();
    printf("\n");
    P();
    printf("\n");
    P();
    printf("\n");
     I();
    return 0;
}

void B()
{ 
    sample();   
    sample1();
    sample1();
    sample();
    sample1();
    sample1();
    sample();
           }
void sample() {
    int c;
    for(c = 1;c <= 5;c++) {
        if(c <= 4) {
            printf("*");
             }
        else
            printf(" ");} 
            printf("\n");}
void sample1() {
    int c,k = 1;
    for(c = 1;c <= 5; c++) {
        if(c == k) {
            printf("*");
           
            k = 5; }
        else
            printf(" ");}
            printf("\n"); }
            

void A()
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

void P() {
    sample();   
    sample1();
    sample1();
    sample();
    sample5();

}

void I() {
    sample6();
    for(int r = 1;r <= 6;r++) {
        for(int c = 1;c <= 4;c++)
            if(c == 4)
                printf("*");
            else
                printf(" ");
            printf("\n"); }
    sample6();
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
void sample5() {
    for(int r = 1;r <= 3;r++)
        printf("*\n");
}

void sample6() {
    for(int c = 1;c <= 7;c++)
        printf("*");
    printf("\n");
}