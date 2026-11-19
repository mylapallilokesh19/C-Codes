#include<stdio.h>
void swap(int x,int y);
int main()
{
	int x=10,y=20;
	printf("before swao in main\n");
	printf("x=%d,y=%d\n",x,y);
	swap(x,y);
	printf("after swap in main\n");
	printf("x=%d,y=%d\n",x,y);
}
//call by value
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("inside swap functoin \n");
	printf("x=%d,y=%d\n",x,y);
}
