#include <stdio.h>

int main(void)
{
    char *s1 = "sangwoo";
    char *s2 = "sangwoo";
    strmp(s1, s2);

    if (strmp(s1, s2) == 0)
    {
        printf("문자열 비교 성공");
    }
}

int strmp(char *s1, char *s2)
{
    char c1, c2;

    while (1)
    {
        // s1, s2 문자열에서 순서대로 한글자씩 가져온다.
        c1 = *s1++;
        c2 = *s2++;

        // 한글자씩 비교하고 다르면 1을 리턴
        if (c1 != c2)
        {            
            printf("똑같지 않다");
            return 1;
        }
        else
        {
            // 같으면 정상종료
            printf("똑같다");
            return 0;
        }            
    }
}