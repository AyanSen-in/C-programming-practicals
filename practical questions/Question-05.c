//swapping of two numbers without using third variable 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a :\n");
    scanf("%d",&a);
    printf("Enter value of b :\n");
    scanf("%d",&b);
    printf("Value of a before Swapping :%d\n",a);
    printf("Value of b before Swapping :%d\n",b);
    a=a+b;
    b=a-b;
    c=a-b;

    printf("Value of a after Swapping :%d\n",a);
    printf("Value of a after Swapping :%d\n",b);

    return 0;


   
}