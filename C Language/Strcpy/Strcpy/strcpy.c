#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
     char* s1 = "sangwoo";
    // ���ڿ��� ������ Null������ �����ؼ� �޸� �Ҵ�
     char* s2 = malloc(strlen(s1) + 1);
     int size = 0;
     size = strlen(s1) + 1;

    // s1�� Null�� ���� ������ ���ڿ� ����(��) �ݺ��� ����
    for (int i = 0; i < size; i++)
    {
        //���ڿ��� ó�������� ���������� loop
        s2[i] = s1[i];
    }
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
}