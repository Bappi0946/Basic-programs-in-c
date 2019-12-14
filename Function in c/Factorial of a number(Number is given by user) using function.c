#include<stdio.h>
int factorial(int);
int main()
{    int x,y;
    printf("Enter the number you want to factorial: ");
    scanf("%d",&x);
    y=factorial(x);
    printf("Result of the factorial is: %d",y);
}

int factorial(int N)
{
    int a=1,b;
    for(b=1;b<=N;b++)
        a=a*b;
    return a;

}
