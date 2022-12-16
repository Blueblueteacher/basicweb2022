// 1506 : 2차원 배열 채우기 4 (역달팽이 배열)
#include<stdio.h>

int main() 
{
    int arr[15][15];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { // arr배열에 다 0으로 초기화시키기  
    	for (int j = 0; j < n; j++)
    		arr[i][j] = 0;
	}
	// 시작지점 정하기
	int i = 0, j = 0, v = 1; // v는 저장할 값  
	arr[i][j] = v;
	v++;
	
	while (v <= n * n) { // 값이 배열의 총 크기보다 작거나 같을 때 
	
		while (i + 1 < n && arr[i+1][j] == 0) { // 아래로 증가할 때 
			i++; // 아래로 한 칸 옮겨
			arr[i][j] = v;
			v++; 
		} 
		while (j + 1 < n && arr[i][j+1] == 0) { // 오른쪽으로 증가할 때 
			j++; // 옆으로 한 칸 옮겨
			arr[i][j] = v; // 옮긴 곳에 값(v) 저장 
			v++; // v 증가 
		}
		while (i - 1 >= 0 && arr[i-1][j] == 0) { // 위로 증가할 때 
			i--; // 아래로 한 칸 옮겨 
			arr[i][j] = v;
			v++;
		} 		
		while (j - 1 >= 0 && arr[i][j-1] == 0) { // 왼쪽으로 증가할 때 
			j--; // 왼쪽으로 한 칸 옮겨 
			arr[i][j] = v;
			v++;
		}	
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	 
	return 0;
}