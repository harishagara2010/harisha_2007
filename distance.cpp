#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("velocity is:");
	scanf("%f",&u);
	printf("Acceleration is:");
	scanf("%f",&a);
	printf("Time is:");
	scanf("%d",&t);
	d=(u*t)+(a*t*t/2);
	printf("Distance is: %.2f",d);
	return 0;
}
