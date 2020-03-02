#include <stdio.h>

int main(void) {
	int x, y;
	float a, b;
	float coordinate[5][20];
	for(int i=0; i<4; i++){
		scanf("%d %d", &x, &y);

		// printf("%d %d\n", x, y);

		coordinate[i][0] = x;
		coordinate[i][1] = y;

	}
	//左
	a = (coordinate[0][1] - coordinate[1][1]) / (coordinate[0][0] - coordinate[1][0]);

	b = coordinate[0][1] - coordinate[0][0]*a;

	if(b < 0){
		printf("0");
		return 0;
	}

	// printf("%f", b);

	//下
	a = (coordinate[1][1] - coordinate[2][1]) / (coordinate[1][0] - coordinate[2][0]);

	b = coordinate[1][1] - coordinate[2][0]*a;

	if(b < 0){
		printf("0");
		return 0;
	}

	//右
	a = (coordinate[2][1] - coordinate[3][1]) / (coordinate[2][0] - coordinate[3][0]);

	b = coordinate[2][1] - coordinate[3][0]*a;

	if(b > 0){
		printf("0");
		return 0;
	}

	//上
	a = (coordinate[3][1] - coordinate[0][1]) / (coordinate[3][0] - coordinate[0][0]);

	b = coordinate[3][1] - coordinate[0][0]*a;

	if(b > 0){
		printf("0");
		return 0;
	}



	printf("1");
		return 0;
}




	// y1 - a*x = b

	// y1 = a*x1 + b;
	// y2 = a*x2 + b;

	// => y1 - y2 = (x1 - x2)*a
	// => y3 = x3*a
	// => y3/x3 = a
