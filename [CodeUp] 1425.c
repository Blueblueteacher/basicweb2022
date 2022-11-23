// 1425 : 자리 배치
#include<stdio.h>

int main() 
{
	int n, c, temp, k = 0; // n : 학생 수, c : 자리 개수
	scanf("%d %d", &n, &c); 
	
	int key[100]; // 학생들의 키 저장 배열

    for (int i = 0; i < n; i++) { // 키 입력 받기
        scanf("%d", &key[i]);
    }
    

    for (int i = 0; i < n; i++) { // 키 오름차순 정렬
        for (int j = 0; j < n-i-1; j++) {
            if (key[j] > key[j+1]) {
                temp = key[j];
                key[j] = key[j+1];
                key[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) { 
        printf("%d", key[i]); // 키 값 출력
        k++; // 자리 증가
    	if (c == k) { // 자리가 한 줄의 자리 개수랑 같을 때
    		printf("\n"); // 엔터
    		k = 0; // 다시 0으로
		}     
    }

    return 0;
}