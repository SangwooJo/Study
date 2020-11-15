#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s1 = "sangwoo1";
    // 문자열끝 null 값까지 메모리 할당
    char *s2 = malloc (strlen(s1) + 1);

    // 문자열 인덱스 0 부터 s1의 문자열 null 값까지 포함한 길이만큼 loop
    for (int i = 0, n = strlen(s1); i < n + 1; i++)
    {
        // loop의 step당 할당 
        s2[i] = s1[i];
    }

    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);    
}


