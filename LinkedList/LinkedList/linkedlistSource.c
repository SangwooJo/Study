#include <stdio.h>
#include <stdlib.h>

typedef struct node // ���� ����Ʈ�� ��� ����ü
{
    int number;
    struct  node* next; // ���� ����� �ּҸ� ������ ������
}
node;
struct  node* Head;
void addLinkedHead(node* target, int data);
void updateLinkedHead(node* target, int linkedCount, int changeValue);
void deleteLinkedHead(int linkedCount);
int selectLinkedHead(node* target, int linkedCount);

int main(void)
{
    int count = 1;
    int nCount;
    Head = malloc(sizeof(node)); //target ��尡 �� ��忡 �޸� �Ҵ� 
    if (Head == NULL)
    {
        return 1;
    }
    Head->next = NULL;  // ó�����۽� target ����� ������忡 �ʱ�ȭ 

    addLinkedHead(Head, 1);
    addLinkedHead(Head, 2);
    addLinkedHead(Head, 3);
    addLinkedHead(Head, 4);
    addLinkedHead(Head, 5);
    addLinkedHead(Head, 6);
    addLinkedHead(Head, 7);
    addLinkedHead(Head, 8);
    addLinkedHead(Head, 9);
    addLinkedHead(Head, 10);
    addLinkedHead(Head, 11);
    addLinkedHead(Head, 12);
    addLinkedHead(Head, 13);
    addLinkedHead(Head, 14);
    addLinkedHead(Head, 15);
    addLinkedHead(Head, 16);
    addLinkedHead(Head, 17);
    addLinkedHead(Head, 18);
    addLinkedHead(Head, 19);
    addLinkedHead(Head, 20);

    updateLinkedHead(Head, 1, 22);

    deleteLinkedHead(5);


    node* tmp = Head->next; // target ��带 ������ �ӽ� ��� ����
                                             // �����ϴ� ������ ����� ������ ���� ����� NULL�� ����

    while (1) // ������ ������忡�� ���� ���÷��� loop
    {
        if (tmp->next != NULL)
        {
            printf("����� ��: %i\n", selectLinkedHead(Head, count));
            tmp = tmp->next;
            count++;
        }
        else
        {
            printf("����� ��: %i\n", selectLinkedHead(Head, count));
            break;
        }
    }

    free(tmp);
    free(Head);

    return 0;
}

void addLinkedHead(node* target, int data)  // 'C'
{
    node* newNode = malloc(sizeof(node)); // ����忡 �޸� �Ҵ�
    if (newNode == NULL)
    {
        return 1;
    }
    newNode->next = target->next; // �� ����� ���� ��忡 target ����� ���� ��带 ����
    newNode->next = Head->next;
    newNode->number = data; // ����忡 �Ű����� n�� �� ���� 

    target->next = newNode; // target ����� ���� ��忡 �� ��带 �Ҵ�
}

void updateLinkedHead(node* target, int linkedCount, int changeValue) // 'U'
{
    node* selectNode = target->next;
    if (selectNode == NULL)
    {
        return 1;
    }
    for (int i = 1; i <= linkedCount; i++)
    {
        selectNode = selectNode->next;
    }
    selectNode->number = changeValue;
}

int selectLinkedHead(node* target, int linkedCount) // 'R'
{
    node* selectNode = target;
    if (selectNode == NULL)
    {
        return 1;
    }
    for (int i = 1; i <= linkedCount; i++)
    {
        selectNode = selectNode->next;
    }
    return selectNode->number;
}

void deleteLinkedHead(int linkedCount) // 'D'
{
    node* temp1 = Head;
    if (linkedCount == 1)
    {
        Head = temp1->next;
        free(temp1);
        return;
    }
    for (int i = 1; i <= linkedCount - 1; i++)
    {
        temp1 = temp1->next;
    }
    node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}