#include <stdio.h>
/**
 * int - thank you for being here
 *
 * main - main is here 
 * Return: void
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write code here
	 * remeber:
	 * dont use a
	 * dont modify p
	 * only one statement
	 */

	*(p + 5) = 98;
	/* ... so that print 98\n*/
	printf("a[2] = %d\n", a[2]);
	return (0);
}
