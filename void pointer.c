#include<stdio.h>
int main(){
	int x=10;
	charch='a';
	void *gp;
	gp=&x;
	printf("\n generic pointer points to the integer value=%d",*(int*)gp);
	gp=&ch;
	printf("\n generic pointer now points to the character %c",*(char*)gp);
	return 0;
}
