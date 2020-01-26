#include<stdio.h>
int exp();
int main()
{
    int a,b,add,sub,pro,div;
    printf("Enter the first number: ");
    scanf("%d",& a);
    printf("Enter the second number: ");
    scanf("%d",& b);
    exp(a,b,&add,&sub,&pro,&div);
    printf("Result of the sum is: %d\n",add);
    printf("Result of the subtract is: %d\n",sub);
    printf("Result of the product is: %d\n",pro);
    printf("Result of the division is: %d\n",div);
    return 0;
}

int exp(int s,int e,int *f,int *j,int *z,int *t) { 

    *f = s + e;
    *j = s - e;
    *z = s * e;
    *t = s / e; }
