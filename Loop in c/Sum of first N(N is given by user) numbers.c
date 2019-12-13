#include<stdio.h>
 main()
{    int N,a=0,b;
    printf("Enter a amount of Natural number you want to sum: ");
    scanf("%d",&N);
    for(b=1;b<=N;b++) a=b+a;
    printf("The sum of first %d numbers is: %d",N,a);
}
