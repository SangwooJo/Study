#include <stdio.h>

void star(int);
void star2(int);
void star3(int);

void main()
{
	star(2);
	star2(2);
	star3(2);
}

void star(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void star2(int n)
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

void star3(int n)
{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int a = n*2-1; a > i*2; a--)
			{
				printf("*");
			}
			printf("\n");
		}
}

