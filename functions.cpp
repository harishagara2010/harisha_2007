#include<stdio.h>
int add(int x,int y);
int main()
{
	int a,b,sum=0;
	printf("Enter the values of a and b:");
	scanf("%d%d,",&a,&b);
	sum=add(a,b);
	printf("sum=%d",sum);
}
    int add(int x,int y)
    {
    	int res;
    	res=x+y;
    	return res;
	}
