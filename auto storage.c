#include<stdio.h>
int main()
{
	int i,n;
	printf("how many elements are there in the array=");
	scanf("%d",&n);
	int *p1=(int *)malloc( sizeof(int)*n);
	int *p2=(int *)malloc( sizeof(int)*n);
	int *p3=(int *)malloc( sizeof(int)*n);

	printf("\nenter the values of array a:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p1+i);
	}
	printf("\nenter the values of array b:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p2+i);
	}
	for(i=0;i<n;i++)
	{
	*(p3+i)=*(p1+i)+*(p2+i);	
	}
    	printf("\nvalues of array a:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p1+i));
	}
	printf("\n values of array b:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p2+i));
	}
	printf("\n values of array c:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p3+i));
	}
	free(p1);
	free(p2);
	free(p3);
}
