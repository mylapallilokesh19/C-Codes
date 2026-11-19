#include <stdio.h>
main()
{
	int a[5]={9,6,10,5,20},i,largest=a[0];
	for(i=1;i<5;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
		}
	}
		printf("largest element:%d",largest);
}
