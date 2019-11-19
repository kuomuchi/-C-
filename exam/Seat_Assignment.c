#include <stdio.h>
#include <stdbool.h>

int main(){
	int car=1, x=1, y=1, people, set=0, Fillin[100][100], nowcar=1, i;
	scanf("%d", &car);
	while(scanf("%d", &people) != EOF){
		// printf("有%d進來了\n", people);
		if(nowcar <= car){
			// printf("不要跟我開玩笑喔..");
			if(people == 1){
				// printf("有%d進來了\n", people);
				if(set != 0){
					printf("%d %d %d\n", Fillin[1][0], Fillin[1][1], Fillin[1][2]);
					set--;
					if(set!= 0){
						for(i=1; i<=set; i++){
							Fillin[i][0] = Fillin[i+1][0];
							Fillin[i][1] = Fillin[i+1][1];
							Fillin[i][2] = Fillin[i+1][2];
							}
						}
				}else{
					printf("%d %d %d\n", nowcar, x, y);
					y++;
					if(y>5){x++; y=1;}
					if(x>20){x=1; nowcar++;}
				}

			}else{
				switch(y){
					case 1: case 2: case 4:
						printf("%d %d %d ", nowcar, x, y);
						y++;
						printf("%d %d %d", nowcar, x, y);
						y++;
						if(y>5){x++; y=1;}
						if(x>20){x=1;nowcar++;}
						break;
					case 3: case 5:
						set++;
						Fillin[set][0] = nowcar;
						Fillin[set][1] = x;
						Fillin[set][2] = y;

						y++;
						if(y>5){x++; y=1;}
						if(x>20){x=1; nowcar++;}
						printf("%d %d %d ", nowcar, x, y);
						y++;
						printf("%d %d %d", nowcar, x, y);
						y++;
						if(y>5){x++; y=1;}
						if(x>20){x=1; nowcar++;}
				}
			printf("\n");
			}

		}else{
			return 0;
		}



	}
return 0;
}



// #define SEATS 5
// #define ROWS 20
// #define CARS 1000
//
// #define TOTALSEATS (CARS * ROWS * SEATS)
//
// void printSeat(int seat)
// {
//   printf("%d %d %d ", seat / (SEATS * ROWS) + 1,
//      (seat / SEATS) % ROWS + 1, seat % SEATS + 1);
// }
//
// int main()
// {
//   int car;
//   scanf("%d", &car);
//   int nextS = 0;
//   int nextD = 0;
//   bool free[TOTALSEATS];
//   bool noDouble = false;
//
//   for (int i = 0; i < TOTALSEATS; i++)
//     free[i] = true;
//
//   int request;
//   while (scanf("%d", &request) != EOF) {
//     switch (request) {
//     case 1:
//       while (!free[nextS])
//     nextS++;
//       free[nextS] = false;
//       printSeat(nextS);
//       printf("\n");
//       nextS++;
//       break;
//
//     case 2:
//       if (!noDouble) {
//     while ((nextD + 1 < car * ROWS * SEATS) &&
//            !( ((nextD % SEATS == 0) || (nextD % SEATS == 1) ||
//            (nextD % SEATS == 3))
//           && free[nextD] && free[nextD + 1]))
//       nextD++;
//
//     if (nextD + 1 >= car * ROWS * SEATS)
//       noDouble = true;
//       }
//
//       if (noDouble) {
//     while (!free[nextS])
//       nextS++;
//     free[nextS] = false;
//     printSeat(nextS);
//
//     while (!free[nextS])
//       nextS++;
//     free[nextS] = false;
//     printSeat(nextS);
//
//     printf("\n");
//       } else {
//     free[nextD] = free[nextD + 1] = false;
//     printSeat(nextD);
//     printSeat(nextD + 1);
//     printf("\n");
//     nextD += 2;
//       }
//       break;
//     }
// #ifdef DEBUG
//     printf("%d\n", request);
// #endif
//   }
//   return 0;
// }
