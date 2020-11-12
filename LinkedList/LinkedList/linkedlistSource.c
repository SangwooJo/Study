#include <stdio.h>
#include <stdlib.h>

typedef struct node // ���� ����Ʈ�� ��� ����ü
{
    int number;
    struct  node* next; // ���� ����� �ּҸ� ������ ������
}
node;

void linkedList(node* target, int n)
{
    node* newNode = malloc(sizeof(node)); // ����忡 �޸� �Ҵ�
    if (newNode == NULL)
    {
        return 1;
    }
    newNode->next = target->next; // �� ����� ���� ��忡 target ����� ���� ��带 ����
    newNode->number = n; // ����忡 �Ű����� n�� �� ���� 

    target->next = newNode; // target ����� ���� ��忡 �� ��带 �Ҵ�
}

int main(void)
{
    node* list = malloc(sizeof(node)); //target ��尡 �� ��忡 �޸� �Ҵ� 
    if (list == NULL)
    {
        return 1;
    }
    list->next = NULL;  // ó�����۽� target ����� ������忡 �ʱ�ȭ 

    linkedList(list, 1);
    linkedList(list, 2);
    linkedList(list, 3);
    linkedList(list, 4);
    linkedList(list, 5);
    linkedList(list, 6);
    linkedList(list, 7);
    linkedList(list, 8);
    linkedList(list, 9);
    linkedList(list, 10);
    linkedList(list, 11);
    linkedList(list, 12);
    linkedList(list, 13);
    linkedList(list, 14);
    linkedList(list, 15);
    linkedList(list, 99);
    linkedList(list, 98);
    linkedList(list, 97);
    linkedList(list, 96);
    linkedList(list, 95);

    node* tmp = list->next; // target ��带 ������ �ӽ� ��� ����
                                        // �����ϴ� ������ ����� ������ ���� ����� NULL�� ����
    while (tmp->next != NULL) // ������ ������忡�� ���� ���÷��� loop
    {
        printf("%i\n", tmp->number);
        tmp = tmp->next;
    }

    free(tmp);
    free(list);

    return 0;
}