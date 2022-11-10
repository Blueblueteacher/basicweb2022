/*
// 1353 삼각형 출력하기 1
#include<stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) { // 줄
		for (int j = 0; j <= i; j++) { // 별
			printf("*");
			if (i == j) // 별의 개수와 줄의 개수가 동일할 때 \n
				printf("\n");
		}
	}
}
*/
// 1354 삼각형 출력하기 2
#include<stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	
	for (int i = n; i > 0; i--) {  // 줄 
		for (int j = 0; j < i; j++) { // 칸 (이때 반복문의 범위를 0부터 i까찌로 설정해서 별 찍기)
			printf("*");
		}
		printf("\n");
	}
}