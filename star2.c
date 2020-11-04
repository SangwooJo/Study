#include <stdio.h>

void star(int);

void main()
{
	star(5);
}

void star(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			printf(" ");
		}
		for (int a = 0; a <= i * 2; a++)
		{
			printf("*");
		}
		printf("\n");
	}


}