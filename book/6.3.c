#include <stdio.h>

int main() {
	int a[100][100], x, i, num, odd=0, even=0, y;
	scanf("%d", &x);

	for(i=1; i<=x; i++){
		// printf("%d", i);
		scanf("%d", &num);
		if(num % 2 != 0){
			a[0][odd] = num;
			// printf("%d", a[0][odd]);
			odd++;

		}else if(num % 2 == 0){
			a[1][even] = num;
			// printf("%d", a[1][even]);
			even++;
		}
	}

	for(i=1; i<=odd; i++){
		printf("%d ", a[0][i-1]);
	}
	printf("\n");
	for(i=1; i<=even; i++){
		printf("%d ", a[1][i-1]);
	}

	return 0;
}
