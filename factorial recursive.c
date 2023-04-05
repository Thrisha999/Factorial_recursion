#include<stdio.h>
void main()
{
	int fact(int n);
	int factorial=1,n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	factorial=fact(n);
	printf("factorial=%d",factorial);
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
