// 1407 : 문자열 출력하기 1
#include<stdio.h>

int main() 
{
	char s[101]; // 문자열의 최대 길이가 100이므로, 배열의 크기는 101로 지정
    gets(s); // 입력받기
    
    for (int i = 0; s[i] != '\0'; i++) { // 널 문자를 만날 때까지
    	if (s[i] != ' ') // 공백이 아니면
    		printf("%c", s[i]); // 출력
	}

    return 0;
}
