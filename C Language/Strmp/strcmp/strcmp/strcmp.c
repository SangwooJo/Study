#include <stdio.h>
int strcmp(char* s1, char* s2);
int main(void)
{
    char* s1 = "saa1ngwoo";
    char* s2 = "sa1ngwoo";

    if (strcmp(s1, s2) == 0)
    {
        printf("[%s] == [%s]\n", s1, s2);
        printf("Success in strmp function");
    }
}
int strcmp(char* s1, char* s2)
{
    int countNumber = 1;
    char c1, c2;

    char* xAdress = &s1;
    char* yAdress = &s2;

    while (1)
    {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 != c2)
        {
            printf("it's not same\n");
            printf("you have to fix---> %i : %c != %c\n", countNumber, c1, c2);
            return 1;
        }
        if (*xAdress == *yAdress)
        {
            printf("it's same\n");
            return 0;
        }
    }
}