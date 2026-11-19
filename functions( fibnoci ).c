#include<stdio.h>

int fib(int n);

int main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	fib(n);
	return 0;
}

int fib(int n)
{
  int a=1,b=1,c,i;
  
  for(i=0;i<=n;i++)
  {
  	printf(" %d",a);
    c=a+b;
    a=b;
    b=c;
  }   
  return a;
}
