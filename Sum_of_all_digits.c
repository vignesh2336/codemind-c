#include <stdio.h>
int main()
{
	int a,b,ds=0;
	scanf("%d%d%d",&a,&b);
   while(a>0)
   {
   	b=a%10;ds=ds+b;a=a/10;
   }
   printf("%d",ds);
}