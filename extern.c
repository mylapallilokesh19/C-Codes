#include<stdio.h>
int fun();
main()
{
	fun();
	fun();
	fun();
}
fun()
{
	static int x;
	x++;
	printf("\nx=%d",x);
}

