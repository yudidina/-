#include<stdio.h>
#include<string.h>
#define maxn 10005
int ans[maxn];

int main(void){
	int T, n;
	memset(ans, 0, sizeof(ans));	
	for(int m=0; m<maxn; mn++){
		int x = m, y = m;
		while(x > 0){
			y += x % 10;
			x /= 10;
		}
		if(ans[y] == 0 || m < ans[y])
			ans[y] = m;
	}
	scanf("%d", &T);
	while(T--){
		scanf("%d", &n);
		printf("%d ", ans[n]);
	}
	printf("\n");
	
	return 0;
}
