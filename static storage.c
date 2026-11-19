#include<stdio.h>
int x=0;
void fun();
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
void fun()
{
    extern int x;
    x++;
    printf("\n%d",x);
}
