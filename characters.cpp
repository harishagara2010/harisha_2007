#include<stdio.h>
int main()
{
	int a;
	char b;
	char ch;
	char str[100];
	printf("Enter a number");
	scanf("%d",&a);
	printf("Enter a float number");
	scanf("%f",&b);
	printf("Enter a character");
	scanf("%c",&ch);
	printf("Enter a string");
	scanf("%s",str);
	printf("%d\n%f\n\%c\n%s\n",a,b,ch,str);
	return 0;
	
}
