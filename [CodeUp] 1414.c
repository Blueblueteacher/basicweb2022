// 1414 : C언어를 찾아라
#include<stdio.h>

int main() 
{
	char s[101]; 
    gets(s);
    int cnt_c = 0, cnt_cc = 0; // cnt_c : c의 개수, cnt_cc : cc의 개수
    
    for (int i = 0; s[i] != '\0'; i++) {
    	if (s[i] == 'c' || s[i] == 'C')
    		cnt_c++;
	}
	
    for (int i = 0; s[i] != '\0'; i++) {
    	if ((s[i] == 'c' || s[i] == 'C') && (s[i+1] == 'C' || s[i+1] == 'c'))
    		cnt_cc++;
	}
	
	printf("%d\n%d", cnt_c, cnt_cc);
	
    return 0;
}