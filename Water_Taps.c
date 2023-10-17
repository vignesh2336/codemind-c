#include <stdio.h>
int main()
{
    int a,b;
    double c,d,e,f;
    scanf("%d%d",&a,&b);
    c=1.0/a;
    d=1.0/b;
    e=c+d;
    f=1.0/e;
    printf("%.0f",f);
}