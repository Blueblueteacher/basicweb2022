// 1355 : 삼각형 출력하기 3
/*
#include<stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) { // 줄
		for (int j = 0; j < i; j++) // 공백을 먼저 찍고 있으므로 공백 for문이 먼저온다.
			printf(" ");

        for (int j = i; j < n; j++) // 별에 관한 for문 (이때 공백 개수는 0번째 줄일 때 0개 / 1번째 줄일 때 1개 이런식이므로 j의 값을 i(줄)로 설정)
            printf("*");
            
        printf("\n");
	}
}
*/
// 1357 : 삼각형 출력하기 4
#include<stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
			if (i-1 == j)
				printf("\n");
		}
	}
	
	for (int i = n; i > 0; i--) {  // 줄 
		for (int j = 0; j < i; j++) { // 칸 (이때 반복문의 범위를 0부터 i까지로 설정해서 별 찍기)
			printf("*");
		}
		printf("\n");
	}
}
