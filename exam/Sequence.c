#include <stdio.h>
#include <stdbool.h>

int main(){
	int a, b, c, d, e, x, xthing, xthingg, xthinggg, ctimeA, ctimeB=-100, ctimeC=-100, small, mid, large, I_am_on_the_verge_of_collapse;

	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	while(scanf("%d", &x) != EOF ){
			ctimeA = 0;
			xthing = x;
		while(!(d <= xthing && xthing <= e)){
			ctimeA++;
			xthing = ((a*xthing+b) % c);
		}

		if(ctimeC > ctimeB){
			small = ctimeB;
			mid = ctimeC;
		}else{
			small = ctimeC;
			mid = ctimeB;
		}

		if(mid < ctimeA){
			large = ctimeA;
		}else{
			large = mid;
			mid = ctimeA;
		}

		if(small > mid){
			I_am_on_the_verge_of_collapse = mid;
			mid = small;
			small = mid;
		}

		if(mid - small == 1 && large - mid == 1){
			printf("%d %d %d\n", xthinggg, xthingg, x);
			return 0;
		}
		ctimeC = ctimeB;
		ctimeB = ctimeA;

		xthinggg = xthingg;
		xthingg = x;
	}

	printf("Not found");



}
