#include <stdio.h>
#include <stdlib.h>

typedef struct node // 연결 리스트의 노드 구조체
{
    int number;
    struct  node* next; // 다음 노드의 주소를 저장할 포인터
}
node;

void addLinkedList(node* target, int data);
void updateLinkedList(node* target, int linkedCount, int changeValue);
void deleteLinkedList(node* target, int linkedCount);
void selectLinkedList(node* target, int linkedCount);

int main(void)
{
    int count = 1;
    node* list = malloc(sizeof(node)); //target 노드가 될 노드에 메모리 할당 
    if (list == NULL)
    {
        return 1;
    }
    list->next = NULL;  // 처음시작시 target 노드의 다음노드에 초기화 

    addLinkedList(list, 1);
    addLinkedList(list, 2);
    addLinkedList(list, 3);
    addLinkedList(list, 4);
    addLinkedList(list, 5);
    addLinkedList(list, 6);
    addLinkedList(list, 7);
    addLinkedList(list, 8);
    addLinkedList(list, 9);
    addLinkedList(list, 10);
    addLinkedList(list, 11);
    addLinkedList(list, 12);
    addLinkedList(list, 13);
    addLinkedList(list, 14);
    addLinkedList(list, 15);
    addLinkedList(list, 99);
    addLinkedList(list, 98);
    addLinkedList(list, 97);
    addLinkedList(list, 96);
    addLinkedList(list, 95);

    selectLinkedList(list, 17);
    updateLinkedList(list, 17, 22);
    selectLinkedList(list, 17);

    selectLinkedList(list, 5);
    deleteLinkedList(&list,list, 5);
    selectLinkedList(list, 5);

    //selectLinkedList(list, 5);
    //selectLinkedList(list, 17);

    node* tmp = list->next; // target 노드를 복사할 임시 노드 생성
                                        // 복사하는 이유는 노드의 마지막 다음 노드의 NULL값 방지

    while (tmp->next != NULL) // 마지막 다음노드에서 부터 디스플레이 loop
    {
        printf("%i번째 노드의 값 %i\n", count, tmp->number);
        tmp = tmp->next;
        count++;
    }

    //free(tmp);
    free(list);

    return 0;
}

void addLinkedList(node* target, int data)  // 'C'
{
    node* newNode = malloc(sizeof(node)); // 새노드에 메모리 할당
    if (newNode == NULL)
    {
        return 1;
    }
    newNode->next = target->next; // 새 노드의 다음 노드에 target 노드의 다음 노드를 지정
    newNode->number = data; // 새노드에 매개변수 n의 값 저장 

    target->next = newNode; // target 노드의 다음 노드에 새 노드를 할당
}

void updateLinkedList(node* target, int linkedCount, int changeValue) // 'U'
{
    node* selectNode = target->next;
    if (selectNode == NULL)
    {
        return 1;
    }

    for (int i = 1; i <= linkedCount - 1; i++)
    {
        selectNode = selectNode->next;
    }
    printf("선택된 노드 %i번째 %i값", linkedCount, selectNode->number);
    selectNode->number = changeValue;
    printf(" -> %i값으로 변경 되었습니다.\n", changeValue);
}

void selectLinkedList(node* target, int linkedCount) // 'R'
{
    node* selectNode = target;
    if (selectNode == NULL)
    {
        return 1;
    }
    for (int i = 1; i <= linkedCount - 1; i++)
    {
        selectNode = selectNode->next;
    }

    printf("%i번째 노드가 선택되었습니다. 값은 %i 입니다.\n", linkedCount, selectNode->number);
}

void deleteLinkedList(node* target, int linkedCount)
{
    node* selectNode = target;
    if (selectNode == NULL)
    {
        return 1;
    }
    for (int i = 0; i < linkedCount - 1; i++)
    {
        selectNode = selectNode->next;
    }
    node* delete = selectNode->next;
    selectNode->next = selectNode->next->next;
    printf("%i", selectNode->next);
    free(delete);    
}

