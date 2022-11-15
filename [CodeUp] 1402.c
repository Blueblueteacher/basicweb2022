// 1402 : 거꾸로 출력하기 3
#include<stdio.h>

int main() 
{
	int n, temp;
	scanf("%d", &n);
	int arr[1000] = {0, }; // 문제에서 1000칸까지 요구했으므로 1000칸 선언
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // 배열에 값 입력받기
    }

    for (int i = 0; i < n; i++) { // 버블정렬 알고리즘 사용
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) { // 역순 정렬 ">" 기호면 오름차순
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) // 배열 역순 출력
        printf("%d ", arr[i]);

    return 0;
}