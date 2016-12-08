#include<stdio.h>
//#include "myfun.h"

void myfun()
{
	int i;
	for(i=0;i<5;i++)
		printf("Hello %d",i);
}
int main()
{
	myfun();
	return 0;
}
