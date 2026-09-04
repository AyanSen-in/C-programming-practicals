//calculation of circumference and area of circle
#include <stdio.h>
#define pi 3.14159
int main()
{
    float radius ,cir,area;
    printf("Enter the radius of the circle : \n");
    scanf("%f", &radius);
    cir = 2*pi*radius;
    area=pi*radius*radius;
    printf("circumference of the circle is : %f\n",cir);
    printf("Area of the circle is : %f \n", area);
    return 0;
}