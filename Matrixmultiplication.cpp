#include<stdio.h>
int main()
{
	int a[2][3],b[3][2],i,j,k,r1,c1,r2,c2,c[2][2];
	printf("Enter rows and columns of matrix a:");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and columns of matrix b:");
	scanf("%d%d",&r2,&c2);
	printf("Enter the elements of matrix A:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix B:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("Resultant matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
