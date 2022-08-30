#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *p;

	p = (int*)malloc(2*sizeof(int));

	int arr[2];

	p = arr;


	for (int i = 0; i < 2; ++i)
	{
		scanf("%d",&p[i]);
	}

	for (int i = 0; i < 2; ++i)
	{
		printf("%d\n",p[i]);
	}
	return 0;
}