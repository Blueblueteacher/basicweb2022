// 1420 : 3등 찾기
#include<stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	
	char name[55][22]; // 학생의 이름을 저장
	int score[55], score_a[55], temp, third, idx; // score : 학생 점수 정렬용, score_a : 학생 점수, third : 세번째, idx : 인덱스
	
	for (int i = 0; i < n; i++) {
		scanf("%s %d", &name[i], &score[i]); // 학생들의 이름과 점수 입력
		score_a[i] = score[i]; // 점수를 저장할 배열
	}

	
	for (int i = 0; i < n; i++) { // 버블정렬로 학생들의 점수를 오름차순으로 정렬
		for (int j = 0; j < n-i-1; j++) {
			if (score[j] <= score[j+1]) {
				temp = score[j];
				score[j] = score[j+1];
				score[j+1] = temp;
			}
		}
	}
	
	third = score[2]; // 세번째로 큰 점수를 저장
	
	for (int i = 0; i < n; i++) { // 학생 점수 배열에서 세번째로 큰 점수에 해당하는 인덱스 값 저장
		if (third == score_a[i])
			idx = i;
	}
	
	printf("%s", name[idx]); // 인덱스 값에 해당하는 이름 출력
	

    return 0;
}
