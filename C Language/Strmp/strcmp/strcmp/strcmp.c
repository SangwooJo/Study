#include <stdio.h>

int strcmp(char* s1, char* s2);
int main(void)
{
    char* s1 = "sangwoo";
    char* s2 = "sangwoo2";

    if (strcmp(s1, s2) == 0)
    {
        printf("same....[%s] == [%s]\n", s1, s2);        
    }
    else
    {
        printf("not same....[%s] != [%s]\n", s1, s2);        
    }
}
int strcmp(char* s1, char* s2)
{
    int countNumber = 1;
    char c1, c2;

    while (1)
    {
        // 문자열의 글자를 하나씩 ++;
        c1 = *s1++;
        printf("%p -- c1\n", *&s1);
        c2 = *s2++;
        printf("%p -- c2\n", *&s2);
        if (c1 != c2)
        {
            return 1;
        }
        // 문자열의 끝까지 도달하면 break
        if (c1 == NULL || c2 == NULL)
        {
            break;
        }
    }    
    return 0;
}