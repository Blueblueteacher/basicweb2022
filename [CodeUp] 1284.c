// 1284 암호해독

#include<stdio.h>

int prime(x) { // 소수인지 판단하는 함수
    int count = 0;
    for (int i = 1; i <= x; i++) {  // 1부터 자기 자신까지 나누어보기
        if (x % i == 0) {  
            count++;
        }
    }

    if (count == 2) // 나누어 떨어지는 수의 개수가 2개이면 소수
        return 1;
    return 0;
}

int main() 
{
    int n; // 어떤 수
    scanf("%d", &n);
    
    for (int i = 1; i <= n / 2; i++) { 
        if (n % i == 0) { 
            if (prime(i) && prime(n / i)) {  // 나누어 떨어지는 수가 소수인지 판단
                printf("%d %d", i, n / i);
                return 0;
            }
        }
    }

    printf("wrong number");

    return 0;
}