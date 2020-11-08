#include <stdio.h>

void bubble_Sort(int list[], int n);
void selection_Sort(int list[], int n);

int main(void)
{
	int list[6] = { 5,1,6,2,4,3 };

	//bubble_Sort(list, 6);
	selection_Sort(list, 6);

	for (int i = 0; i < 6; i++)
	{
		printf("%d", list[i]);
	}
}

void bubble_Sort(int list[], int n)
{
	int temp;	
	// n개의 요소를 정렬해 주기 위해서는 n-1번 실행해줘야함.
	for (int i = n - 1; i > 0; i--)
	{		
		// j번째와 j+1번째의 요소가 크기 순이 아니면 교환
		for (int j = 0; j < i; j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void selection_Sort(int list[], int n)
{
	int min;
	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (list[j] < list[min])
			{
				min = j;
			}
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}




