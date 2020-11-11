#include <stdio.h>
#include <stdbool.h>
#define Size_Max 6
// �� �迭
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

    //(left : �迭�� ���� ��ġ, right : �迭�� ��)
    //mergeSort(list, 0, 5);

    //bubbleSort(list, 6);
    //selectionSort(list, 6);

    //(left : �迭�� ���� ��ġ, right : �迭�� ��)
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

    // �迭�� ����n�� ��ŭ loop
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        //�迭�� i+1�ڸ��������� n�� ������ŭ loop
        for (int j = i + 1; j < n; j++)
        {
            // ������������ ǥ���� �Ϸ��� min++���� ǥ���� �� �ִ�.
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
        //�߰� ����
        int mid = (left + right) / 2;
        // ���� �κ�
        mergeSort(list, left, mid); // ���ݺ� ����
        mergeSort(list, mid + 1, right); // �Ĺݺ� ����
        // ���� �κ�
        merge(list, left, mid, right); // �պ�
    }
}

void merge(int list[], int left, int mid, int right)
{
    int i, j, k, l;
    i = left; // ���ĵ� ���� ����Ʈ�� ���� �ε���
    j = mid + 1; //���ĵ� ������ ����Ʈ�� ���� �ε���
    k = left; // ���ĵ� ����Ʈ�� ���� �ε��� 

    // ���� ���ĵ� list�� �պ� 
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
    // ���� �ִ� ������ �ϰ� ����
    if (i > mid)
    {
        for (l = j; l <= right; l++)
        {
            sortTemp[k++] = list[l];
        }
    }
    // ���� �ִ� ������ �ϰ� ����
    else
    {
        for (l = i; l <= mid; l++)
        {
            sortTemp[k++] = list[l];
        }
    }

    // �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
    for (l = left; l <= right; l++)
    {
        list[l] = sortTemp[l];
    }
}



