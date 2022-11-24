/*
// 1133 : 공백이 있는 문자열 입출력
#include<stdio.h>

int main() 
{
	char s[31]; // 문자열의 최대 길이가 30이므로, 배열의 크기는 31로 지정
    fgets(s, 31, stdin); // stdin을 사용해서 문자열 공백 기준으로 입력받기
    printf("%s", s); // 출력

    return 0;
}
*/
// 1295 : 알파벳 대소문자 변환
#include<stdio.h>
#include<string.h>

int main() 
{
	char s[1001]; // 문자열의 최대 길이가 1000이므로, 배열의 크기는 1001로 지정
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }

    printf("%s", s);

    return 0;
}