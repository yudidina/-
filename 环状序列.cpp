#include<stdio.h>
#include<string.h>
#define maxn 105
//比较环状序列的大小
int less(const char *s, int p, int q){
	int len = strlen(s);
	for(int i=0; i<len; i++){
		if(s[(p+i)%len] != s[(q+i)%len])
			return s[(p+i)%len] < s[(q+i)%len]; //如果从p位置开始的序列比较小，返回1 
	}
	return 0;//两个序列相等 
} 


int main(void){
	int T;
	char s[maxn];
	scanf("%d", &T);
	while(T--){
		scanf("%s", s);
		int ans = 0, len = strlen(s);
		for(int i=1; i<len; i++){
			if(less(s, i, ans))	ans = i; //替换序列起始位置为i 
		}
		//输出最终序列
		for(int i=0; i<len; i++){
			putchar(s[(ans+i)%len]);
		} 
		putchar('\n');
	}
	
	return 0;
}
/*
2
CTCC
CGAGTCAGCT
*/

