#include <stdio.h>

int fib (int n){
	if(n==1)
	    return 1;
	return fib(n-1) + n*n;
}

int main(void){
	int x;
	scanf("%d", &x);

	printf("%d", fib(x));


}
