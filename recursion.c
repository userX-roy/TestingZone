#include <stdio.h>

void fun1(int n)
{
	if (n > 0)
	{
		fun1(n-1);
		printf("%d ",n);
	}


	printf("%d\n",n); //this print will 1st show in console
}


int main(int argc, char const *argv[])
{
	fun1(4);
	printf("\n");
	return 0;
}