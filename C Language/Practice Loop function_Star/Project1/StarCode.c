#include <stdio.h>
void star(int);
void star2(int,int);
void star3(int,int);

void main()
{
    star(5);
    printf("\n");
    star2(10, 10);
    printf("\n");
    star3(10, 10);
}

void star(int n)
{
    if (n == 0)
    {
        return;
    }

    star(n - 1);

    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
    printf("\n");
}

void star2(int heightN, int height)
{
    if (heightN == 0)
    {
        return;
    }

    star2(heightN - 1, height);

    for (;height > heightN;height--)
    {        
        printf(" ");

    }

    for (int j = 1; j < heightN * 2; j++)
    {
        printf("*");
    }

    printf("\n");
}

void star3(int heightN, int height)
{
    if (heightN == 0)
    {
        return;
    }

    star3(heightN - 1, height);    

    for (int j = 1; j < heightN; j++)
    {
        printf(" ");
    }

    for (int i = height * 2 - 1; i > (heightN-1) * 2; i--)
    {
        printf("*");
    }

    printf("\n");
}

