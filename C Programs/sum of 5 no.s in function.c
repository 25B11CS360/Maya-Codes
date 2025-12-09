#include<stdio.h>
int nSum(int n)
{
	//base condition to terminate the recursion when N=0
	if(n==0)
	{
		return 0;
	}
	//recurrsive case/call
	int res = n+nSum(n-1);
	return res;
}
int main()
{
	int n=5;
	//calling the function
	int sum= nSum(n);
	printf("sum of first %d natural numbers: %d",n,sum);
}
