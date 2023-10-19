#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=0;
    y=(y+x)%3;
    if(y==2)
    {
        printf("SMALL");
    }
    else if(y==1)
    {
        printf("HUGE");
    }
    else if(y==0)
    {
        printf("NORMAL");
    }
}