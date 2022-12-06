// 2721 : 순환 문자열
#include<stdio.h>
#include<string.h> // strlen 사용으로 선언

int main() 
{
	char s1[20], s2[20], s3[20];
	gets(s1);
	gets(s2);
	gets(s3);
	int len1, len2, len3; // 문자열의 길이 각각 구해주기
	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = strlen(s3);
	
	if (s1[len1-1]==s2[0]) { // s1의 마지막과 s2의 첫번째 비교
		if (s2[len2-1]==s3[0]) { // s2의 마지막과 s3의 첫번째 비교
			if (s3[len3-1]==s1[0]) // s3의 마지막과 s1의 첫번째 비교
				printf("good");
			else
				printf("bad");
		}
		else printf("bad");
	}
	else
		printf("bad");
			
    return 0;
}