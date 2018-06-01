#include <stdio.h>

int main()
{
    int n,fact=1,i;
    scanf("%d",&fact);
    for(i=1;i<=fact;i++)
    fact=fact*i;
    
    printf("%d",fact);
    return 0;
}
