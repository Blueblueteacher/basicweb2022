// 1418 : t를 찾아라
#include<stdio.h>

int main() 
{
	char s[11]; 
    gets(s);
    
    for (int i = 0; s[i] != '\0'; i++) {
    	if (s[i] == 't') // 알파벳 t를 만나면
    		printf("%d ", i+1); // 인덱스 값 출력
	}
	
    return 0;
}