#include<stdio.h>
#include<string.h>
#define maxn 105
//�Ƚϻ�״���еĴ�С
int less(const char *s, int p, int q){
	int len = strlen(s);
	for(int i=0; i<len; i++){
		if(s[(p+i)%len] != s[(q+i)%len])
			return s[(p+i)%len] < s[(q+i)%len]; //�����pλ�ÿ�ʼ�����бȽ�С������1 
	}
	return 0;//����������� 
} 


int main(void){
	int T;
	char s[maxn];
	scanf("%d", &T);
	while(T--){
		scanf("%s", s);
		int ans = 0, len = strlen(s);
		for(int i=1; i<len; i++){
			if(less(s, i, ans))	ans = i; //�滻������ʼλ��Ϊi 
		}
		//�����������
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

