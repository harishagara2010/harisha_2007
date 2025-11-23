#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]={"apple"};
	char str2[20]={"applet"};
    char res=strcmp(str1,str2);
	if(res==0)
	printf("Both are equal");
	else if(res<0)
	printf("str2 is greater than str1");
	else
	printf("str2 is less than str1");
	return 0;
}
