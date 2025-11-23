#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the values of n1,n2,n3");
	scanf("%d%d%d",&n1,n2,n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("n1 is big");
		}
		else
		{
			printf("n3 is big");
		}
	}
	else
	{
		if(n2>n3)
		{
		printf("n2 is big");	
		}
		else
		{
			printf("n3 is big");
		}
	}
	return 0;
}
	
	
	
		
	
	
	
	

