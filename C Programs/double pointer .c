#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	int **pp;
	p=&a;
	pp=&p;
	printf("the address of p is %d\n",p);
	printf("the address is %d\n",pp );
	printf("the value of first pointer is %d\n",*p);
	printf("the value of second pointer is %d\n",**pp);
}
