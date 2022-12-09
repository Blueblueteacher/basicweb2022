// 1501 : 2차원 배열 배우기 1
## 1501 : 2차원 배열 채우기 1<br>

```C
#include<stdio.h>

int main() 
{
    int n[50][50];
    int d, s = 1;
    scanf("%d", &d);

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", s);
            s++;
        }     
        printf("\n");
    }
}