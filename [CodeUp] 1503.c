// 1503 : 지그재그 입력
#include<stdio.h>

int main() 
{
    int n[50][50];
    int d, number = 1;
    scanf("%d", &d);

	for (int i = 0; i < d; i++) { 
		if (i % 2 == 0) { // 짝수일 때 
			for (int j = 0; j < d; j++) { // number값 그대로 배열에 넣기
				n[i][j] = number;
				number++;
			}
		}
		
		else { // 홀수일 때
			for (int j = d - 1; j >= 0; j--) { // number값 거꾸로 배열에 넣기
				n[i][j] = number;
				number++;		
			}
		}
		
	}	
	
	for (int i = 0; i < d; i++) { // 배열값 출력
		for (int j = 0; j < d; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
	return 0;
}