#include <stdio.h>
#include <stdlib.h>
#define MaxSizeNumber 5

int arrNumber[MaxSizeNumber];
int glovalKey = 0;

int push(int number)
{
    arrNumber[glovalKey] = number;
    glovalKey++;
}
int pop()
{
    int output = arrNumber[glovalKey - 1];
    glovalKey--;
    printf("%i", output);
}

int main(void)
{
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);

    pop();
    printf("\n");
    pop();
    printf("\n");
    pop();
    printf("\n");
    pop();
    printf("\n");
    pop();
    printf("\n");

    push(5);
    pop();
    printf("\n");
    push(1);
    push(5);
    pop();
    printf("\n");
    pop();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    printf("\n");
    pop();
    printf("\n");
    pop();
    printf("\n");
    push(99);
    pop();
    printf("\n");
}