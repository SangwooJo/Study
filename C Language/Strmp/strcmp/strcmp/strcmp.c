#include <stdio.h>

int strcmp(char* s1, char* s2);
int main(void)
{
    char* s1 = "san4gwoo";
    char* s2 = "saa2ngwoo";

    if (strcmp(s1, s2) == 0)
    {
        printf("same....[%s] == [%s]\n", s1, s2);        
    }
    if (strcmp(s1, s2) == 1)
    {
        printf("not same....[%s] != [%s]\n", s1, s2);        
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
            return 1;
        }
        if (c1 == NULL || c2 == NULL)
        {
            break;
        }
    }    
    return 0;
}