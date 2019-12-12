#include<stdio.h>
 main() {
        char c;
    float a,b;
    
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the operator: ");
    scanf(" %c",&c);
    printf("Enter the secound number: ");
    scanf("%f",&b);
    switch (c) {
        case ('+'):
        printf("Result of the sum is: %f",a+b);
        break;
        case ('-') :
        printf("Result of the minus is: %f",a-b);
        break;
        case ('*'):
        printf("Result of the multiplication is: %f",a*b);
        break;
        case ('/'):
        printf("Result of the division is: %f",a/b);
        break;
        default:printf("Invalid input");
        
        } 
}
