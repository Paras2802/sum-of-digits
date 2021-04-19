#include<stdio.h>
int sum(int n)
{
	if (n==0)
	return 0;
	else 
	return n%10 + sum(n/10);
}
int main ()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d", &n);
	int res= sum(n);
	printf("The sum of digits is:%d", res);
	return 0;
}
