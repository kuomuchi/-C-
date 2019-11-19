#include <stdio.h>

int main() {
	int game[100][100], num, turn=1;

	while(scanf("%d", &num)){
		if(turn != 0){
			game[1][num]==1;
		}else{
			game[2][num]==1;
		}
		if((game[1][1]==1 && game[1][2]==1 && game[1][3]==1)||(game[1][4]==1&&game[1][5]==1&&game[1][6]==1)||(game[1][7]==1&&game[1][8]==1&&game[1][9]==1)||(game[1][1]==1&&game[1][4]==1&&game[1][7]==1)&&(game[1][2]==1&&game[1][5]==1&&game[1][8]==1)||(game[1][3]==1&&game[1][6]==1&&game[1][9]==1)||(game[1][1]==1&&game[1][5]==1&&game[1][9]==1)||(game[1][3]==1&&game[1][5]==1&&game[1][7]==1)){
			printf("%d", num);
			return 0;
		}
		if((game[2][1]==1 && game[2][2]==1 && game[2][3]==1)||(game[2][4]==1&&game[2][5]==1&&game[2][6]==1)||(game[2][7]==1&&game[2][8]==1&&game[2][9]==1)||(game[2][1]==1&&game[2][4]==1&&game[2][7]==1)&&(game[2][2]==1&&game[2][5]==1&&game[2][8]==1)||(game[2][3]==1&&game[2][6]==1&&game[2][9]==1)||(game[2][1]==1&&game[2][5]==1&&game[2][9]==1)||(game[2][3]==1&&game[2][5]==1&&game[2][7]==1)){
			printf("%d", num);
			return 0;
		}
	turn++;

	}
	printf("%d", 0);
	
	return 0;
}
