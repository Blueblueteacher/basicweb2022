/*
// 1675 : 시저의 암호 1
#include<stdio.h>

int main() 
{
    char s;
    
    while (scanf("%c", &s) != EOF) {
        if (s >= 97 && s <= 122) {
            if (s - 3 < 97) 
                printf("%c", s + 23);
            else if (s - 3 >= 97)
                printf("%c", s - 3);
        }

        if (s == ' ')
            printf(" ");
    }

    return 0;
}
*/
// 1294 : 시저의 암호 2
#include<stdio.h>

int main() 
{
    char s;
    
    while (scanf("%c", &s) != EOF) {
        if (s >= 97 && s <= 122) {
            if (s + 3 >= 123) 
                printf("%c", s - 23);
            else if (s + 3 <= 122)
                printf("%c", s + 3);
        }

        if (s == ' ')
            printf(" ");
    }

    return 0;
}