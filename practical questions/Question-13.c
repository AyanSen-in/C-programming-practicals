//Find the longest number among given three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number (a):\n");
    scanf("%d",& a);
    printf("Enter the first number (b):\n");
    scanf("%d",& b);
    printf("Enter the first number (c):\n");
    scanf("%d",& c);

    if (a>b&& a>c)
    {
        printf("The largest number is %d",a );
    }
    else if (b>c)
    {
       printf("The largest number is %d",b ); 
    }
    else
    {
        printf("The largest number is %d",c );
    }

    return 0;
}