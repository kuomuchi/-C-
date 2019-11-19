#include<stdio.h>
#include <stdbool.h>



int main(){

	int a, b, c, d, e;
	int x, xed, xeded = -100;
	int ced, ceded = -100;
	bool found = false;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	while(!found && scanf("%d", &x) != EOF){

		int C = 0;
		int X = x;

		while(!((X >= d) && (X <= e))){
			X = ((a * X) + b) % c;
			C++;
		}

		bool stop = false;
		int diff = C - ced;
		switch (diff) {
			case 1:
				stop = (ceded == C + 1 || ceded == C - 2);
				break;
			case 2:
				stop = (ceded == C - 1);
				break;
			case -1:
				stop = (ceded == C - 1 || ceded == C + 2);
				break;
			case -2:
				stop = (ceded == C + 1);
				break;
			}

			if (stop) {
		      printf("%d %d %d\n", xeded, xed, x);
		      found = true;
		    } else {
		      xeded = xed;
		      ceded = ced;
		      xed = x;
		      ced = C;
		}


	}

	if (!found)
		printf("Not found");
	return 0;

	}
// __________________
// #include <stdio.h>
// #include <stdbool.h>
//
// int main()
// {
//   int a, b, c, d, e;
//   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//   int x;
//   int prevprevx, prevprevC = -100;
//   int prevx, prevC = -100;
//   bool found = false;
//
//   while(!found && scanf("%d", &x) != EOF) {
//     int C = 0;
//     int xprime = x;
//     while (!((xprime >= d) && (xprime <= e))) {
//       xprime = ((a * xprime) + b) % c;
//       C++;
//     }
// #ifdef DEBUG
//     printf("%d %d\n", x, C);
// #endif
//     bool stop = false;
//     int diff = C - prevC;
//     switch (diff) {
//     case 1:
//       stop = (prevprevC == C + 1 || prevprevC == C - 2);
//       break;
//     case 2:
//       stop = (prevprevC == C - 1);
//       break;
//     case -1:
//       stop = (prevprevC == C - 1 || prevprevC == C + 2);
//       break;
//     case -2:
//       stop = (prevprevC == C + 1);
//       break;
//     }
//
//     if (stop) {
//       printf("%d %d %d\n", prevprevx, prevx, x);
//       found = true;
//     } else {
//       prevprevx = prevx;
//       prevprevC = prevC;
//       prevx = x;
//       prevC = C;
//     }
//   }
//   if (!found)
//     printf("Not found");
//   return 0;
// }
