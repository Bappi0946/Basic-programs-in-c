#include<stdio.h>
float radius(float);
 main()
{   float r,x;
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);
    x=radius(r);
    printf("The area of the circle is: %f",x);
}
float radius(float a)
{
    float Area,pie=3.1416;
    Area=pie*a*a;
    return Area;



}
