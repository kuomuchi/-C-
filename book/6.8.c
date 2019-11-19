#include <stdio.h>

int main() {
	int y,x,i,j, lis[100][100], W, A, S, D, mid, crossroads=0, TJunction=0, Turn=0, Dead=0;
	scanf("%d%d", &y, &x);
	for(i=1; i<=y; i++){
		for(j=1; j<=x; j++){
			scanf("%d", &lis[i][j]);
		}
	}

	for(i=1; i<=y; i++){
		for(j=1; j<=x; j++){
			mid = lis[i][j];
			W = lis[i-1][j];
			A = lis[i][j-1];
			S = lis[i+1][j];
			D = lis[i][j+1];

			if(mid != 0){
				//十字路口
				if(W==1 && A==1 && S==1 && D==1){
					crossroads++;
				}else if((W==1&&A==1&&S==1)||(W==1&&A==1&&D==1)||(A==1&&S==1&&D==1)||((W==1&&S==1&&D==1))){
					TJunction++;
				}else if((W==1&&A==1)||(A==1&&S==1)||(S==1&&D==1)||(W==1&&D==1)){
					Turn++;
				}else if((W==0&&A==0&&S==0)||(W==0&&A==0&&D==0)||(A==0&&S==0&&D==0)){
					Dead++;
				}
			}
		}
	}

	printf("%d\n%d\n%d\n%d\n", crossroads, TJunction, Turn, Dead);

	return 0;
}
