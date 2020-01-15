// Tried something new
#include<stdio.h>

void sample(void);
void sample1(void);
int main()
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