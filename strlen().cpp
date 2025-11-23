#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	gets(name);
	int len;
	len=strlen(name);
	printf("%d",len);
	return 0;
}
