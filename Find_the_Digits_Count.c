#include <stdio.h>
int main()
{
    int a,b,dc=0;
    scanf("%d",&a);
   while(a>0)
   {
   	 b = a % 10;
   	 dc++;
   	 a = a /10;
   }\n   printf("%d
",dc);
}