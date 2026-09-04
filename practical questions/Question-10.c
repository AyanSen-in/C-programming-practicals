//Sum of square of n natural numbers .

#include<stdio.h>
int main()
{
    int n , i, sum=0 ;
    printf("Enter a positive integer \n");
    scanf("%d",&n);
    for (i=1; i<=n ; i++)
    {
        sum =sum +i*i;
    }

    printf ("The sum of square of natural numbers is %d ",sum);

    return 0;
}