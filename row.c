#include<stdio.h>
void main()
{
	int n,m,sum;
	scanf("%d%d",&n,&m);
	int x[n][m],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&x[i][j]);
		}
    }
   
    for(i=0;i<n;i++)
    {
	   sum=0;
	  for(j=0;j<m;j++)
        {	
		 sum=sum+x[i][j];
		}
		printf("%d\n",sum);
	}
}
	
	
