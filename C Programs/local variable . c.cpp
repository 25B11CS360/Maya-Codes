#include<stdio.h>
void function();
int main()
{
	function();
}
void function()
{
	int x = 10;//local variable
	printf("%d",x);
}
