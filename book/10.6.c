#include <stdio.h>
#include <ctype.h>

int main(){

	char c;
	int num=0, world=0, mon=0, sun=0;

	while(scanf("%c", &c) != EOF){

		if(isdigit(c))
			num++;

		if(isalpha(c))
			world++;

		c = tolower(c);

		if(isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){
			mon++;
		}else{
			sun++;
		}

	}

	printf("%d\n%d\n%d\n%d\n", num, world, mon, sun);


	return 0;
}
