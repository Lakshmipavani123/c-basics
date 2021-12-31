#include<stdio.h>
void main()
{
	int m;
	printf("enter the value of m");
	scanf("%d", &m);
	if(m>100)
	{
		printf("invalid m");
	}
	else if(90>=m && m<=100)
	{
		printf("o grade");
	}
	else if(80>=m && m<90)
	{
		printf("A grade");
	}
	else if(70>=m && m<80)
	{
		printf("B grade");
	}
	else if(60>=m && m<70)
	{
		printf("C grade");
	}
	else if(50>=m && m<60)
	{
		printf("D grade");
	}
	else
	{
		printf("fail");
	}
	
	
}
