#include <stdio.h>

int main(void)
{
    char *s1 = "sangwoo";
    char *s2 = "sangwoo";
    strmp(s1, s2);

    if (strmp(s1, s2) == 0)
    {
        printf("���ڿ� �� ����");
    }
}

int strmp(char *s1, char *s2)
{
    char c1, c2;

    while (1)
    {
        // s1, s2 ���ڿ����� ������� �ѱ��ھ� �����´�.
        c1 = *s1++;
        c2 = *s2++;

        // �ѱ��ھ� ���ϰ� �ٸ��� 1�� ����
        if (c1 != c2)
        {            
            printf("�Ȱ��� �ʴ�");
            return 1;
        }
        else
        {
            // ������ ��������
            printf("�Ȱ���");
            return 0;
        }            
    }
}