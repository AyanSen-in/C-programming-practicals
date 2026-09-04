//Print the number 1 to n
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a positive integer :\n");
    scanf("%d",&n);
    do{
        printf ("%d\t",i);
        i++;
    }
    while (i<=n);
    
    return 0;
    
}