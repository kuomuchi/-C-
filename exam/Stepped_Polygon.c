#include <stdio.h>
#include <stdbool.h>
int main(){
	int a, b, c, d, e, f, Ans, Bns;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	Ans = (a+b+c+d+e+f)*2;
	Bns = a*(b+d+f) + c*(d+f) + e*f;

	printf("%d\n", Ans);
	printf("%d\n", Bns);
}
