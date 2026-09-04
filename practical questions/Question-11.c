//Factorial of positive integer

#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a positive integer :");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of n is :%d", fact);

    return 0;
}