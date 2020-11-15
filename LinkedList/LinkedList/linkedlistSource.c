#include <stdio.h>
#include <stdlib.h>

typedef struct node // ���� ����Ʈ�� ��� ����ü
{
    int number;
    struct  node* next; // ���� ����� �ּҸ� ������ ������
}
node;
struct  node* Head;
int nodeNumber = 0;
int addLinkedHead(int data);
int updateLinkedHead(int index, int changeValue);
int deleteLinkedHead(int index);
int selectLinkedHead(int index);
int insertLinkedHead(int index, int addValue);

int main(void)
{
    Head = malloc(sizeof(node));
    int numberCount = 1;

    if (Head == NULL)
    {
        return 1;
    }
    Head->next = NULL;

    //Create
    addLinkedHead(1);
    addLinkedHead(2);
    addLinkedHead(3);
    addLinkedHead(4);
    addLinkedHead(5);
    addLinkedHead(6);
    addLinkedHead(7);
    addLinkedHead(8);
    addLinkedHead(9);
    addLinkedHead(10);
    addLinkedHead(11);
    addLinkedHead(12);
    addLinkedHead(13);
    addLinkedHead(14);
    addLinkedHead(15);
    addLinkedHead(16);
    addLinkedHead(17);
    addLinkedHead(18);
    addLinkedHead(19);
    addLinkedHead(20);

    //Update
    updateLinkedHead(1, 22);
    //Delete
    deleteLinkedHead(5);
    //Insert
    insertLinkedHead(3, 99);

    node* tmp = Head->next; // target ��带 ������ �ӽ� ��� ����
                                             // �����ϴ� ������ ����� ������ ���� ����� NULL�� ����    

    while (1) // ������ ������忡�� ���� ���÷��� loop
    {
        if (tmp->next != NULL)
        {
            //Select
            printf("%i ��° ����� ��: %i\n", numberCount, selectLinkedHead(nodeNumber));
            tmp = tmp->next;
            nodeNumber--;
            numberCount++;
        }
        else
        {
            printf("%i ��° ����� ��: %i\n", numberCount, selectLinkedHead(nodeNumber));
            break;
        }
    }

    free(tmp);
    free(Head);

    return 0;
}

int addLinkedHead(int data)  // 'C'
{
    node* newNode = malloc(sizeof(node)); // ����忡 �޸� �Ҵ�
    if (newNode == NULL)
    {
        printf("addLinkedHead return 1");
        return 1;
    }
    newNode->next = Head->next; // �� ����� ���� ��忡 target ����� ���� ��带 ����
    newNode->number = data; // ����忡 �Ű����� n�� �� ���� 

    Head->next = newNode; // target ����� ���� ��忡 �� ��带 �Ҵ�    
    nodeNumber++;
    return 0;
}

int updateLinkedHead(int index, int changeValue) // 'U'
{
    int n = nodeNumber - index;
    node* selectNode = malloc(sizeof(node));
    selectNode = Head->next;
    if (selectNode == NULL)
    {
        printf("updateLinkedHead return 1");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        selectNode = selectNode->next;
    }
    selectNode->number = changeValue;
    return 0;
}

int selectLinkedHead(int index) // 'R'
{
    node* selectNode = malloc(sizeof(node));
    selectNode = Head->next;
    if (selectNode == NULL)
    {
        printf("selectLinkedHead return 1");
        return 1;
    }
    for (int i = 1; i < index; i++)
    {
        selectNode = selectNode->next;
    }
    int output = selectNode->number;
    return output;
}

int deleteLinkedHead(int index) // 'D'
{
    int n = nodeNumber - index;
    node* temp1 = Head;

    if (temp1 == NULL)
    {
        printf("deleteLinkedHead return 1");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        temp1 = temp1->next;
    }
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    nodeNumber--;
    return 0;
}
int insertLinkedHead(int index, int addValue)
{
    int n = nodeNumber - index;
    node* newNode = malloc(sizeof(node));
    newNode->number = addValue;
    newNode->next = NULL;
    if (newNode == NULL)
    {
        printf("insertLinkedHead return 1");
        return 1;
    }

    node* temp2 = Head;
    if (temp2 == NULL)
    {
        printf("insertLinkedHead return 2");
        return 2;
    }

    for (int i = 0; i < n; i++)
    {
        temp2 = temp2->next;
    }

    newNode->next = temp2->next;
    temp2->next = newNode;
    nodeNumber++;
    return 0;
}