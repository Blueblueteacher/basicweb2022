/*// 1411 : 빠진카드
#include<stdio.h>

int main() 
{
	int card[50] = {0, }; // 배열 선언
	int n, num;
	
	scanf("%d", &n); // 카드의 총 개수
    for (int i = 1; i <= n - 1; i++) { // 카드 값
        scanf("%d", &num);
        card[num] = 1; // flag 사용해서 카드가 있다면 그 칸의 값을 1로 설정
    }

	for (int i = 1; i <= n; i++) { 
		if (card[i] == 0) // flag가 0이면
			printf("%d", i); // i값 출력
	}
	
    return 0;
}
*/
// 1412 : 알파벳 개수 출력하기
#include<stdio.h>

int main() 
{
	char s[90]; // 문자열  
	gets(s);
	int n; // 아스키값 저장  
	char answer[26] = {0, }; // 소문자 빈도수 저장 배열
	
	for (int i = 0; s[i] != '\0'; i++) {
		n = s[i];
		if (n >= 97 && n <= 122) { // 소문자일 경우
			answer[n-97]++; // 빈도 수 저장
		}
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%c:%d\n", 97+i, answer[i]);
	} 
	
    return 0;
}