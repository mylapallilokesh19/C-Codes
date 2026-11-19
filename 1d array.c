#include <stdio.h>
 int main()
 {

	int a[5],b[5],c[5],i;
	for(i=0;i<5;i++)
	{
	
		printf("\nenter the values of a[%d]=",i);
		scanf("%d",&a[i]);	
		}
		
		for(i=0;i<5;i++)
	{
	    printf("\nenter the values of b[%d]=",i
		);
		scanf("%d",&b[i]);
		}
		for(i=0;i<5;i++)
	{
			c[i]=a[i]+b[i];
		}
	 printf("\nvalue of a array is \t");
		for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		}
		
	
	printf("\nvalue of b array is \t");
		for(i=0;i<5;i++)
	{
		
			printf("%d\t",b[i]);
		}
		
	printf("\nvalue of c array is \t");
		for(i=0;i<5;i++)
	{
			printf("%d\t",c[i]);
		}
		
}
