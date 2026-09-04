//Swapping of two numbers-using a third variable.

#include<stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Value of a before Swapping :%d\n",a);
    printf("Value of b before Swapping :%d\n",b);

    //swapping logic 

    temp = a;
    a = b;
    b = temp;

    printf("Value of a After swapping:%d\n",a);
    printf("Value of b After swapping:%d\n",b);

    
    return 0;
}