// 1504 : 지그재그 배열 2
#include<stdio.h>

int main() 
{
    int n[101][101]; // 배열의 원소를 1부터 시작하기 때문에 배열의 칸을 101만큼 
    int d, number = 1;
    scanf("%d", &d);

	for (int i = 1; i <= d; i++) {
		if (i % 2 == 1) { // 홀수줄
			for (int j = 1; j <= d; j++) {
				n[j][i] = number;
				number++;
			}
		}
		
		else { // 짝수줄
			for (int j = d; j > 0; j--) {
				n[j][i] = number;
				number++;		
			}
		}
		
	}	
	
	for (int i = 1; i <= d; i++) { // 배열 출력
		for (int j = 1; j <= d; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}