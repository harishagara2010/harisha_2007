#include<stdio.h>
int main()
{
	int a[6]={10,20,30,40,50,60};
	int key=50,mid,low=0,high=5,found=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			found=1;
			break;
		}
		else if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(found==1)
	{
	printf("Element found");
}
     else
     {
     	printf("Element not found");
     }
     return 0;
 }

