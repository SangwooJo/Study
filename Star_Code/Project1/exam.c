#include <stdio.h>

int inputNumber;
int countNumber = NULL;
int numberStar2N;
int numberStar3N;

void star(int);
void star2(int);
void star3(int);

void main()
{
	inputNumber = 3;
	star(inputNumber);
	star2(inputNumber);
	printf("\n");
	star3(inputNumber);
}

void star(int n)
{
	if (n == 0)
	{
		return;
	}	
	
	star(n - 1);

		for (int j = 0; j < n; j++)
		{
			printf("*");
		}
		printf("\n");	
}

void star2(int n)
{				
	if (n == inputNumber)
	{
		numberStar2N = n;
	}
	if (n == 0)
	{
		return;
	}		

	 star2(n - 1);		

	 int i = numberStar2N;

	for (i -1; i > n ; i--)	 
	{
 		 printf(" ");
	}

	for (int j = 1; j < n *2; j++)
	{
		printf("*");
	}

	printf("\n");

		

}

void star3(int n)
{	
	if (inputNumber == n)
	{
		numberStar3N = n;
	}
	if (n == 0)
	{
		return;
	}

	star3(n - 1);

	int k = numberStar3N;
	

	for (int j = 1; j < n; j++)
	{
		printf(" ");
	}

	for (int i = k*2-1; i > countNumber*2; i--)
	{
		printf("*");
	}
		printf("\n");		
		countNumber++;
}

