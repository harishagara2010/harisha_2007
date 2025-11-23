#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,sum=0,r,c;
	printf("Enter no.of rows and columns:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
			sum=sum+a[i][j];
		    }
		}
	} 
	printf("Trace of matrix is:%d",sum);
	return 0;	
}
