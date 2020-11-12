#include <stdio.h>
#include <stdlib.h>

typedef struct node // 연결 리스트의 노드 구조체
{
    int number;
    struct  node* next; // 다음 노드의 주소를 저장할 포인터
}
node;

void linkedList(node* target, int n)
{
    node* newNode = malloc(sizeof(node)); // 새노드에 메모리 할당
    if (newNode == NULL)
    {
        return 1;
    }
    newNode->next = target->next; // 새 노드의 다음 노드에 target 노드의 다음 노드를 지정
    newNode->number = n; // 새노드에 매개변수 n의 값 저장 

    target->next = newNode; // target 노드의 다음 노드에 새 노드를 할당
}

int main(void)
{
    node* list = malloc(sizeof(node)); //target 노드가 될 노드에 메모리 할당 
    if (list == NULL)
    {
        return 1;
    }
    list->next = NULL;  // 처음시작시 target 노드의 다음노드에 초기화 

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

    node* tmp = list->next; // target 노드를 복사할 임시 노드 생성
                                        // 복사하는 이유는 노드의 마지막 다음 노드의 NULL값 방지
    while (tmp->next != NULL) // 마지막 다음노드에서 부터 디스플레이 loop
    {
        printf("%i\n", tmp->number);
        tmp = tmp->next;
    }

    free(tmp);
    free(list);

    return 0;
}