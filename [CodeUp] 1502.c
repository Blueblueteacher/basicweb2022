// 1502 : 2차원 배열 채우기 2
#include<stdio.h>

int main() 
{
    int n[50][50];
    int d, s;
    scanf("%d", &d);

    for (int i = 0; i < d; i++) {
    	s = i + 1;
        for (int j = 0; j < d; j++) {
            printf("%d ", s);
            s = s + d;
        }     
        printf("\n");
    }

    return 0;
}