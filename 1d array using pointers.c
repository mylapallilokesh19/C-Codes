#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	int *p1=a,*p2=b,*p3=c;
	printf("\nenter the values of array a:");
	for(i=0;i<5;i++)
	{
		scanf("%d",p1+i);
	}
	printf("\nenter the values of array b:");
	for(i=0;i<5;i++)
	{
		scanf("%d",p2+i);
	}
	for(i=0;i<5;i++)
	{
	*(p3+i)=*(p1+i)+*(p2+i);	
	}
    	printf("\nvalues of array a:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p1+i));
	}
	printf("\n values of array b:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p2+i));
	}
	printf("\n values of array c:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p3+i));
	}
}
