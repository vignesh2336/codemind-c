#include <stdio.h>
int main()
{
    int a,i,multi=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       multi*=i;
    }
     printf("%d",multi);
    
}