#include<stdio.h>
main() {
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a % 5 == 0) 
        {printf("%d is divided by 5",a);
        printf("\nThe result is %d",a/5);
        }
    else printf("%d is not divided by 5",a);
}
