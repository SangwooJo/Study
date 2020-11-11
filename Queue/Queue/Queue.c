#include <stdio.h>
#include <stdlib.h>
#define MaxSizeNumber 5

int arrNumber[MaxSizeNumber];
int glovalKey = 0;

int input(int number)
{
    arrNumber[glovalKey] = number;
    glovalKey++;
}

int main(void)
{
    int c = MaxSizeNumber - 1;
    input(2);
    input(4);
    input(6);
    input(8);
    input(10);

    for (int i = 0; i <= c; i++)
    {
        printf("%i\n", arrNumber[i]);
    }
}