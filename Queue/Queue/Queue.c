#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSizeNumber 100

int arrNumber[MaxSizeNumber];
int glovalKey = 0;
int queueCount = 0;

int push(int number)
{
    arrNumber[glovalKey] = number;
    glovalKey++;
}
void pop()
{
    if (glovalKey == queueCount)
    {
        printf("empty\n");
    }
    else
    {
        printf("%i\n", arrNumber[queueCount]);
        queueCount++;
    }
}

int main(void)
{
    int c = MaxSizeNumber - 1;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);

    pop();
    pop();
    push(8);
    pop();
    pop();
    pop();
    pop();
    pop();

    push(22);
    pop();

    pop();
    pop();
    pop();
    pop();
    pop();

    push(123);
    push(456);
    push(789);
    pop();

    push(20);
    pop();
    pop();
    pop();
}