#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s1 = "sangwoo1";
    // ���ڿ��� null ������ �޸� �Ҵ�
    char *s2 = malloc (strlen(s1) + 1);

    // ���ڿ� �ε��� 0 ���� s1�� ���ڿ� null ������ ������ ���̸�ŭ loop
    for (int i = 0, n = strlen(s1); i < n + 1; i++)
    {
        // loop�� step�� �Ҵ� 
        s2[i] = s1[i];
    }

    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);    
}


