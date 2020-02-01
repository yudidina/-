#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char * rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {"not a palindrome", "a regular palindrome", 
					"a mirrored string", "a mirrored palindrome"};
char r(char ch){
	if(isalpha(ch)){
		return rev[ch-'A'];
	}
	return rev[ch-'0'+25];
}

int main(void){
	char s[100];
	while(scanf("%s", s) == 1){
		int m = 1, p = 1;
		int len = strlen(s);
		for(int i=0; i<=(len+1)/2; i++){
			//ÅÐ¶Ï¾µÏñ×Ö·û´® 
			if(s[len-i-1] != r(s[i]))
				m = 0;
			//ÅÐ¶Ï»ØÎÄ×Ö·û´® 
			if(s[len-i-1] != s[i])
				p = 0;
		}
		printf("%s -- is %s.\n\n", s, msg[m*2+p]);
	}
	return 0;
}
/*
NOTAPALINDROME
ISAPALINILAPASI
2A3MEAS
ATOYOTA
*/		
