#include <stdio.h>

int main() {
	int a[12];
	int i, x=0;
	scanf("%d", &i);
	for(x=0; x <= i; x++){
		scanf("%d", &a[x]);

	}
	for(x=i; x>=0; x--){
		printf("%3d", a[x]);
	}


	return 0;
}


//課本6.1 把數列倒過來
