#include <stdio.h>
#include <stdlib.h>

typedef struct node // 연결 리스트의 노드 구조체
{
    int number;
    struct  node* next; // 다음 노드의 주소를 저장할 포인터
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
    Head = malloc(sizeof(node)); //target 노드가 될 노드에 메모리 할당 
    if (Head == NULL)
    {
        return 1;
    }
    Head->next = NULL;  // 처음시작시 target 노드의 다음노드에 초기화 

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

void addLinkedHead(node* target, int data)  // 'C'
{
    node* newNode = malloc(sizeof(node)); // 새노드에 메모리 할당
    if (newNode == NULL)
    {
        return 1;
    }
    newNode->next = target->next; // 새 노드의 다음 노드에 target 노드의 다음 노드를 지정
    newNode->next = Head->next;
    newNode->number = data; // 새노드에 매개변수 n의 값 저장 

    target->next = newNode; // target 노드의 다음 노드에 새 노드를 할당
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