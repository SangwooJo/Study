#include <stdio.h>
#include <stdbool.h>
#define Size_Max 6
// 빈 배열
int sortTemp[Size_Max];

void bubbleSort(int list[], int n);
void selectionSort(int list[], int n);
void mergeSort(int list[], int left, int right);
void merge(int list[], int left, int mid, int right);

int main(void)
{
    //int list[6] = { 5,1,6,2,4,3 };
    int list[6] = { 1,2,3,4,5,6 };
    bubbleSort(list, 6);
    //selectionSort(list, 6);

    //(left : 배열의 시작 위치, right : 배열의 끝)
    //mergeSort(list, 0, 5);

    //bubbleSort(list, 6);
    //selectionSort(list, 6);

    //(left : 배열의 시작 위치, right : 배열의 끝)
    //mergeSort(list, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        printf("%d", list[i]);
    }
}

void bubbleSort(int list[], int n)
{
    int temp;
    bool noSwap = true;
    if (noSwap)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (!noSwap)
            {
                return;
            }
            if (list[j] > list[j + 1])
            {
                noSwap = false;
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int list[], int n)
{
    int min;
    int temp;

    // 배열의 원소n개 만큼 loop
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        //배열의 i+1자리에서부터 n의 갯수만큼 loop
        for (int j = i + 1; j < n; j++)
        {
            // 오름차순으로 표현을 하려면 min++으로 표현할 수 있다.
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

void mergeSort(int list[], int left, int right)
{
    if (left < right)
    {
        //중간 지점
        int mid = (left + right) / 2;
        // 분할 부분
        mergeSort(list, left, mid); // 전반부 정렬
        mergeSort(list, mid + 1, right); // 후반부 정렬
        // 정복 부분
        merge(list, left, mid, right); // 합병
    }
}

void merge(int list[], int left, int mid, int right)
{
    int i, j, k, l;
    i = left; // 정렬된 왼쪽 리스트에 대한 인덱스
    j = mid + 1; //정렬된 오른쪽 리스트에 대한 인덱스
    k = left; // 정렬될 리스트에 대한 인덱스 

    // 분할 정렬된 list의 합병 
    while (i <= mid && j <= right)
    {
        if (list[i] <= list[j])
        {
            sortTemp[k++] = list[i++];
        }
        else
        {
            sortTemp[k++] = list[j++];
        }
    }
    // 남아 있는 값들을 일괄 복사
    if (i > mid)
    {
        for (l = j; l <= right; l++)
        {
            sortTemp[k++] = list[l];
        }
    }
    // 남아 있는 값들을 일괄 복사
    else
    {
        for (l = i; l <= mid; l++)
        {
            sortTemp[k++] = list[l];
        }
    }

    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for (l = left; l <= right; l++)
    {
        list[l] = sortTemp[l];
    }
}



