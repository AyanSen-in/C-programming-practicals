//calculation of average

#include <stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter the first number , a:\n");
    scanf ("%d",&a);
    printf("Enter the second number , b:\n");
    scanf ("%d",&b);
    printf("Enter the third number , c:\n");
    scanf ("%d",&c);

    sum = a + b + c;
    avg = sum / 3.0;
    printf("The average of three numbers is: %.f\n",avg);

    return 0;

}