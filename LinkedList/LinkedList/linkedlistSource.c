#include <stdio.h>
#include <stdlib.h>

typedef struct node // 연결 리스트의 노드 구조체
{
    int number;
    struct  node* next; // 다음 노드의 주소를 저장할 포인터
}
node;
struct  node* Head;
int addLinkedHead(node* target, int data);
int updateLinkedHead(node* target, int index, int changeValue);
int deleteLinkedHead(int index);
int selectLinkedHead(node* target, int index);
int insertLinkedHead(int index, int addValue);

int main(void)
{
    int count = 1;
    Head = malloc(sizeof(node));
    if (Head == NULL)
    {
        return 1;
    }
    Head->next = NULL;

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

    //updateLinkedHead(Head, 1, 22);

    //deleteLinkedHead(5);

    insertLinkedHead(3, 99);

    node* tmp = Head->next; // target 노드를 복사할 임시 노드 생성
                                             // 복사하는 이유는 노드의 마지막 다음 노드의 NULL값 방지

    while (1) // 마지막 다음노드에서 부터 디스플레이 loop
    {
        if (tmp->next != NULL)
        {
            printf("노드의 값: %i\n", selectLinkedHead(Head, count));
            tmp = tmp->next;
            count++;
        }
        else
        {
            printf("노드의 값: %i\n", selectLinkedHead(Head, count));
            break;
        }
    }

    free(tmp);
    free(Head);

    return 0;
}

int addLinkedHead(node* target, int data)  // 'C'
{
    node* newNode = malloc(sizeof(node)); // 새노드에 메모리 할당
    if (newNode == NULL)
    {
        return 1;
    }
    newNode->next = Head->next; // 새 노드의 다음 노드에 target 노드의 다음 노드를 지정
    newNode->number = data; // 새노드에 매개변수 n의 값 저장 

    target->next = newNode; // target 노드의 다음 노드에 새 노드를 할당
    return 0;
}

int updateLinkedHead(node* target, int index, int changeValue) // 'U'
{
    node* selectNode = target->next;
    if (selectNode == NULL)
    {
        return 1;
    }
    for (int i = 1; i <= index; i++)
    {
        selectNode = selectNode->next;
    }
    selectNode->number = changeValue;
    return 0;
}

int selectLinkedHead(node* target, int index) // 'R'
{
    node* selectNode = target;
    if (selectNode == NULL)
    {
        return 1;
    }
    for (int i = 1; i <= index; i++)
    {
        selectNode = selectNode->next;
    }
    return selectNode->number;
}

int deleteLinkedHead(int index) // 'D'
{
    node* temp1 = Head;
    if (index == 1)
    {
        Head = temp1->next;
        free(temp1);
        return 0;
    }
    for (int i = 1; i <= index - 1; i++)
    {
        temp1 = temp1->next;
    }
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    return 0;
}
int insertLinkedHead(int index, int addValue)
{
    node* new_node = malloc(sizeof(node));
    new_node->number = addValue;
    new_node->next = NULL;
    if (index == 1)
    {
        new_node->next = Head;
        Head = new_node;
        return 0;
    }
    node* temp2 = Head;

    for (int i = 1; i <= index; i++)
    {
        temp2 = temp2->next;
    }

    new_node->next = temp2->next;
    temp2->next = new_node;
    return 0;
}