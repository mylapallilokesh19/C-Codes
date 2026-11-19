#include <stdio.h>
 main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nenter the values of a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);	
		}
		
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
	    printf("\nenter the values of b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
		}
		
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		
	}
	 printf("\nvalue of a array is \t");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		
	}
	printf("\nvalue of b array is \t");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		
	}
	printf("\nvalue of c array is \t");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		
	}
}
