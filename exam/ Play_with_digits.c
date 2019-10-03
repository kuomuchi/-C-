#include <stdio.h>

int main(){
	int i=0, odd=0, even=0, zeros=0, ar2, areven, num;
	while (scanf("%d", &num) != EOF){
		i++;
		if(i % 2 == 1)
			odd = odd + num;
		else
			even = even + num;
		if(num == 0)
			zeros++;
	}
	ar2 = ((even - odd) == 0)? 1:0;
	areven = (num % 2 == 0)? 1:0;

	printf("%d\n%d\n%d\n%d\n", i, areven, zeros, ar2);

	return 0;


}
