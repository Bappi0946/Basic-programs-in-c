#include<stdio.h>

void TNRN();
int TSRS(int,int,int);
int TNRS();
void TSRN(int,int,int);

int main()
{
    int a = 0,b = 0,c = 0,f;
    
    printf("Function type: Takes Nothing Return Nothing:- \n");
    TNRN();
    
    printf("\n\nFunction type: Takes something Return something:- \n");
       f = TSRS(a,b,c);
    printf("Sum of the first natural numbers square is %d",f);    
    
    printf("\n\nFunction type: Takes Nothing Return something:- \n");
    f = TNRS();
    printf("Sum of the first natural numbers square is %d",f);
    
    printf("\n\nFunction type: Takes something Return Nothing:- \n");
    TSRN(a,b,c);
    return 0;
}

void TNRN() {
    int a,b,c = 0;
    for(a = 0;a <= 9;a++) {
        b = a * a;
        c = b + c; }
    printf("Sum of the first natural numbers square is %d",c);

}

int TSRS(int j,int k,int m) {
   
    while(j <= 9) {
        k = j * j;
        m = k + m;
        j++; }
    return m;

}

int TNRS() {
   int a = 0,b,c = 0;
       while(a <= 9) {
        b = a * a;
        c = b + c;
        a++; }
    return c;
}

void TSRN(int j,int k,int m) {
   
    while(j <= 9) {
        k = j * j;
        m = k + m;
        j++; }
    printf("Sum of the first natural numbers square is %d",m);

}
