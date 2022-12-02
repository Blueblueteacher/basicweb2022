// 1408 : 암호처리
#include<stdio.h>

int main() 
{
	char s[21]; // 문자열의 최대 길이가 20이므로, 배열의 크기는 21로 지정
    gets(s);
    
    for (int i = 0; s[i] != '\0'; i++) { // 첫번째 조건
    	printf("%c", s[i]+2);
	}
	printf("\n");
    for (int i = 0; s[i] != '\0'; i++) { // 두번째 조건
    	printf("%c", (s[i]*7) % 80 + 48);
	}
    return 0;
}