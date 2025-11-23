#include<stdio.h>
void myfunction();
void motherfunction();
int main()
{
	myfunction();
	return 0;
}
void myfunction()
{
	printf("Welcome to C programming.\n");
	motherfunction();
}
void motherfunction()
{
	printf("Hello World");
}
