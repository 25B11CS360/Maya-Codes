#include<stdio.h>
void function1();
void function2();
int x = 20;// global variable
int main()
{
	function1();
	function2();
}
void function1()
{
	printf("function1 : %d\n", x);
}
void function2()
{
	printf("function2 : %d\n", x);
}
