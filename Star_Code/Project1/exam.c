#include <stdio.h>
void star(int);
void star2(int);
void star3(int);

void main()
{    
    star(5);
    printf("\n");
    star2(5,5);
    printf("\n");
    star3(5,5);
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

void star2(int nOne,int nTwo)
{
    if (nOne == 0)
    {
        return;
    }

    star2(nOne - 1,nTwo);    

    for (nTwo - 1; nTwo > nOne; nTwo--)
    {
        printf(" ");
    }

    for (int j = 1; j < nOne * 2; j++)
    {
        printf("*");
    }

    printf("\n");
}

void star3(int nOne,int nTwo)
{
    if (nOne == 0)
    {
        return;
    }

    star3(nOne - 1, nTwo);

    int k = nOne - 1;
    
    for (int j = 1; j < nOne; j++)
    {
        printf(" ");
    }

    for (int i = nTwo * 2-1; i > k*2; i--)
    {
        printf("*");
    }    

    printf("\n");    
}

