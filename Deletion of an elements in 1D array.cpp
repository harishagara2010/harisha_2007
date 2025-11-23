#include<stdio.h>
int main()
{
	int a[5],i,pos;
	printf("Enter the elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=pos;i<5;i++)
	{
		a[i]=a[i+1];	
	}
	for(i=0;i<4;i++)
	{
	printf("%d\t10",a[i]);
}
     return 0;	
}
