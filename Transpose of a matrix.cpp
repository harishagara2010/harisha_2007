#include<stdio.h>
int main()
{
	int a[3][3],t[3][3],i,j,r,c;
	printf("Enter rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the elements:");
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
			t[i][j]=a[j][i];
		}
	}
	printf("Transpose of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
