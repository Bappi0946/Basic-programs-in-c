#include<stdio.h>

int main()
{
    int N,i,a[N],sum = 0; 
    float f,avg;
    printf("The number of data your want average: ");
    scanf("%d",& N);
    printf("Enter all the data: ");
    for(i = 0;i < N;i++)
        scanf("%d",& a[i]);
    for(i = 0;i < N;i++)
        sum = sum + a[i];
    f = N;    //f is float data type and N is int type to make the result float N's value is assigned in f.
    avg = sum / f;  // used f in here instead of N because average can be in any real number. we know that if we divide two int number the result will be an int. so I declared f it as float and assign N into it to make the result float type
    printf("Average is: %f",avg);
    return 0;
}
