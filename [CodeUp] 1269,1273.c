/*
// 1269 수열의 값 구하기
#include<stdio.h>

int main() 
{   
    int a, b, c, n; // 시작 값 : a, 곱할 값 : b. 더할 값 : c. 항 : n
    int answer; // 값을 저장할 변수
    scanf("%d %d %d %d", &a, &b, &c, &n); 
    answer = a; // 첫번째 항 저장
    for (int i = 0; i < n-1; i++) { // 두번째 항부터 ~ n까지
        answer = answer * b + c;
    }
    printf("%d", answer);

    return 0;
}
*/
// 1273 ��� ���� �� 
#include <stdio.h>

int main() 
{
    int n; // 입력받은 수
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // 1부터 n까지 나눠보기
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}
