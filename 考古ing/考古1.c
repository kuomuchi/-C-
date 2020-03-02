#include <stdio.h>

int main(void) {
	float N1, N2, N3, X;
	int A;

	scanf("%f %f %f", &N1, &N2, &N3);

	X = (N1*N2*N3)/(N1-N2);

	if(X <= 0){
		printf("None");
		return 0;
	}

	A = X;

	printf("%d", A);

	
	return 0;
}
