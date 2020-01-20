#include<stdio.h>

int fac(int);

int main()
{
    int a,b;
    printf("Enter the number you want to factorial(!) : ");
    scanf("%d", & a);
    b = fac(a);
    printf("The factorial of %d is %d",a,b);
    return 0;
}

int fac(int f)
{
    if(f == 1)
        return f;
    f = f * fac(f - 1);
    return f;
}
