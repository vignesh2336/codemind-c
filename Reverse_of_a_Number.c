#include <stdio.h>
int main()
{
    int a,rev=0,n;
    scanf("%d",&a);
    while(a!=0)
    {
    	n=a%10;
    	rev=rev*10+n;
    	a/=10;
	}
      printf("%d",rev);
	

}