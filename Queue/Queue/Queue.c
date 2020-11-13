#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSizeNumber 100
int arrNumber[MaxSizeNumber];
int glovalKey = 0;
int queueCount = 0;

void push(int number);
void updateLayer(int layerNumber, int chageValue);
void deleteLayer(int layerNumber);
int pop();

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

    updateLayer(0, 10);
    updateLayer(1, 200);
    printf("%i \n", pop());
    push(10);
    deleteLayer(1);
    printf("%i \n", pop());

    printf("%i \n", pop());
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);

    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
    printf("%i \n", pop());
}
void push(int number) // 'C'
{
    arrNumber[glovalKey] = number;
    glovalKey++;
}
int pop() // 'R'
{
    if (glovalKey == queueCount)
    {
        printf("Empty Value ");
        return 0;
    }
    else
    {
        int output = arrNumber[queueCount];
        queueCount++;
        return output;
    }
}
void updateLayer(int layerNumber, int chageValue) // 'U'
{
    arrNumber[layerNumber] = chageValue;
}
void deleteLayer(int layerNumber) // 'D'
{
    int tempHigh[MaxSizeNumber];
    int tempLow[MaxSizeNumber];
    int tempMaster[MaxSizeNumber];

    for (int i = layerNumber; i < glovalKey; i++)
    {
        tempHigh[i] = arrNumber[i + 1];
        tempMaster[i] = tempHigh[i];
    }
    for (int i = 0; i < layerNumber; i++)
    {
        tempLow[i] = arrNumber[i];
        tempMaster[i] = tempLow[i];
    }
    for (int i = 0; i < glovalKey; i++)
    {
        arrNumber[i] = tempMaster[i];
    }
    glovalKey--;
}