//Find the factorial of a natural number.
#include<stdio.h>
int main()
{
    int n,i,fact;
    fact=1;
    printf("Enter the number : \n");
    scanf ("%d",&n);
    if (n == 0)
        fact = 1;
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    printf("The factorial of the number %d: %d\n",n,fact);

    return 0 ;
}