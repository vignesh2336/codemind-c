#include <stdio.h>
int main()
{
	int a,i,sum;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
}