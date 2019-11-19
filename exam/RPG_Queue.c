#include<stdio.h>
#include <stdbool.h>



int main(){
	int card, test, i, set=0;
	int Career[4][5000];
	int Car0=0, Car2=0, Car1=0;

	while (scanf("%d", &card) != EOF) {
		test = card % 3;
		switch (test) {
			case 0:
				Career[0][Car0] = card;
				Car0++;
				break;
			case 1:
				Career[1][Car1] = card;
				Car1++;
				break;
			case 2:
				Career[2][Car2] = card;
				Car2++;
				break;
		}

		// printf("here is ok");


	if(Car0 >= 3 && Car1 >= 1 && Car2 >= 1){

		printf("%d %d %d %d %d\n", Career[0][0], Career[0][1], Career[0][2], Career[1][0], Career[2][0]);

		Career[0][0] = 0;
		Career[0][1] = 0;
		Career[0][2] = 0;
		Career[1][0] = 0;
		Career[2][0] = 0;

		for(i=3; i <= Car0; i++){
			Career[0][i-3] = Career[0][i];
			// printf("%d ", Career[0][i]);
		}
		for(i=1; i <= Car1; i++){
			Career[1][i-1] = Career[1][i];
			// printf("%d ", Career[0][i]);
		}

		for(i=1; i <= Car2; i++){
			Career[2][i-1] = Career[2][i];
			// printf("%d\n", Career[0][i]);
		}

		Car0 = Car0-3;
		if(Car0 < 0){Car0 = 0;}
		Car1--;
		Car2--;
	}

	}
	return 0;
}
