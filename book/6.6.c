#include <stdio.h>

int main() {
	int x,y,i,o,ans[100][100], A, B, C;
	scanf("%d", &y);
	scanf("%d", &x);
	// printf("%d%d", y, x);
	for(i=1; i<=y; i++){
		for(o=1; o<=x; o++){
			scanf("%d", &ans[i][o]);
			// printf("%d", ans[i][o]);
		}
	}

	for(i=1; i<=y; i++){
		for(o=1; o<=x; o++){
			C = ans[i][o-1];
			B = ans[i][o];
			A = ans[i][o+1];
			if(B > A && B > C){
				printf("%d ", B);
			}
		}
	}
	return 0;
}
