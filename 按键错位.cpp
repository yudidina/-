#include<stdio.h>
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(void){
	int c, i;
	while((c = getchar()) != EOF){
		for(i = 1; s[i] && s[i] != c; i++)
			;//ע��������һ�����ţ����� 
		if(s[i])
			putchar(s[i-1]);
		else
			putchar(c);
			
	}
	return 0;
}
