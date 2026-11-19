#include<stdio.h>
int main ()
{
	int i,n;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i+2)
	{
	 printf("\n%d",i);
	}
	return 0;
}
