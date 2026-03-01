#include<stdio.h>

int RSum(int n)
{
	int k;
	if(n == 0)
	{
		return 0;
	}
	else
	{
		k= n + RSum(n-1);
		return k;
	}
}
int main()
{
	int n = 5;
	int sum = RSum(n);
	printf("Sum of First %d Natural Numbers: %d",n,sum);
	return 0;
}
	
		
