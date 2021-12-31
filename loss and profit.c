#include<stdio.h>
void main()
{
	int cp,sp,A,B,per;
	printf("enter the value of cp,sp");
	scanf("%d%d", &cp,&sp);
	if(cp>sp)
	{
		printf("loss");
		A=cp-sp;
		per=A*100/sp;
		printf("loss amount: %d\n",A);
		printf("percentage: %d\n",per);
	}
	else if(cp<sp)
	{
		printf("profit");
		B=sp-cp;
		printf("profit amount: %d\n",B);
		printf("percentage: %d\n",per);
	}


	

}
