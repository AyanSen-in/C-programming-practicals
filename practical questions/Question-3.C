//calculate area and volume of a sphere
#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, area, volume;
    printf("Enter the radius of the sphere: \n");
    scanf("%f", &radius);
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    area = 4 * PI * radius * radius;
    printf("Area of the sphere is : %f\n", area);
    printf("Volume of the sphere is : %f\n", volume);
    return 0;
}