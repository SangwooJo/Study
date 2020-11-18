#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
     char* s1 = "sangwoo";
    // 문자열의 마지막 Null값까지 포함해서 메모리 할당
     char* s2 = malloc(strlen(s1) + 1);
     int size = 0;
     size = strlen(s1) + 1;

    // s1의 Null값 까지 포함한 문자열 길이(번) 반복문 수행
    for (int i = 0; i < size; i++)
    {
        //문자열의 처음서부터 마지막까지 loop
        s2[i] = s1[i];
    }
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
}