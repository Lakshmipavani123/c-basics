#include<stdio.h>
void main()
{
	int num;
	printf("enter the value of num");
	scanf("%d", &num);
	if(num%1==0)
	{
		printf("divisible by 1");
	}
	if(num%2==0)
	{
		printf("divisible by 2");
	}
	if(num%3==0)
	{
		printf("divisible by 3");
	}
	if(num%4==0)
	{
		printf("divisible by 4");
	}
	
}
