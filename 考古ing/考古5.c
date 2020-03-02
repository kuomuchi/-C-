#include <stdio.h>



int main() {
	int N;
	scanf("%d", &N);
	int people[N], check[N], who=0, RMB;
	for(int i=1; i<N+1;i++){
		scanf("%d", &people[i]);
		check[i] = i;
		// printf("%d %d\n", people[i], check[i]);
	}
	// printf("\n");
	int num=0;
	int now = N;


	while(now != 1){
		num++;
		who++;
		if(who > now){
			who = 1;
		}
		// printf("進來");

		for(int i=1; i<now+1; i++){

			if(i != who && people[check[i]] % num == 0){
				people[check[i]] = 0;
				now--;
				// printf("%d", check[i]);
				RMB = check[i];

				for(int j=i; i<now+1;j++){
					check[j] = check[j+1];
				}

			}


		}
	}

	printf("%d", who);

}
