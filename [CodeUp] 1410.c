// 1410 : 올바른 괄호 1
#include<stdio.h>
#include<string.h>

int main() 
{
	char st[100001];
	int open = 0, close = 0; // open = '(' /  close : ')'
	scanf("%s", &st); 
	
	for (int i = 0; i < strlen(st); i++) { // strlen(문자열) : 문자열의 길이를 세줌
		if (st[i] == '(') // " "안에 작성하면 오류 ' '로 작성해야함 (" "은 여러 문자열, ' '은 하나의 문자열을 나타냄)
			open++;
		else if (st[i] == ')')
			close++;
	}
	
	printf("%d %d", open, close);

    return 0;
}