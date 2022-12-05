// 1990 : 3의 배수 판별하기
#include<stdio.h>

int main() 
{
	char n[1000];
	long long int sum = 0; // 입력값이 큰 것을 대비해 long long int로 선언
	gets(n); 
	for (int i = 0; n[i] != '\0'; i++) {
		sum = sum + (n[i] - 48); // 문자열 - 48를 하면 문자가 숫자로 바뀜
	}
	if (sum % 3 == 0)
		printf("1");
	else
		printf("0");
			
    return 0;
}