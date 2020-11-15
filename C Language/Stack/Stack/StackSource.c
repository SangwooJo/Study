#include <stdio.h>
#include <stdlib.h>
#define MaxSizeNumber 5
int lowSizeNumber = MaxSizeNumber;
int arrNumber[MaxSizeNumber];
int globalKey = 0;

void push(int number);
void updateLayer(int layerNumber, int chageValue);
void deleteLayer(int layerNumber);
int pop();

int main(void)
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    updateLayer(0, 15);

    deleteLayer(1);
    deleteLayer(5);
    deleteLayer(4);

    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());

    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(18);
    push(19);
    push(20);

    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
    printf("%i\n", pop());
}
void updateLayer(int layerNumber, int chageValue) // 'U'
{
    arrNumber[layerNumber] = chageValue;
}
void deleteLayer(int layerNumber) // 'D'
{
    int tempHigh[MaxSizeNumber];
    int tempLow[MaxSizeNumber];
    int tempMaster[MaxSizeNumber] = { 0,0,0,0,0 };

    for (int i = layerNumber; i < globalKey; i++)
    {
        tempHigh[i] = arrNumber[i + 1];
        tempMaster[i] = tempHigh[i];
    }
    for (int i = 0; i < layerNumber; i++)
    {
        tempLow[i] = arrNumber[i];
        tempMaster[i] = tempLow[i];
    }
    for (int i = 0; i < globalKey; i++)
    {
        arrNumber[i] = tempMaster[i];
    }
    globalKey--;
}
void push(int number) // 'C'
{
    arrNumber[globalKey] = number;
    globalKey++;
}
int pop() // 'R'
{
    int output = arrNumber[globalKey - 1];
    if (output == 0)
    {
        printf("empty value ");        
    }
    globalKey--;
    return output;
}
