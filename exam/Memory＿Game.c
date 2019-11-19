#include <stdio.h>
#include <stdbool.h>
int main(){
  int card, num, i, game[101][10001], now=0, j, x=1, y=1, thing=0;
  scanf("%d", &num);
    for(i=0; i<num; i++){
      scanf("%d", &card);
      now++;
        if(now == 10000){
        now = 1;
        x++;
      }
      game[x][now] = card;

      for(y=1; y<=x; y++){
        printf("%d ", i);

        for(j=1; j<=now-1; j++){

          if(game[y][j] == card){
            printf("%d %d ", j-1, card);
            game[y][now] = 0;
            game[y][j] = 0;
          }
        }
      printf("\n");

      }
    }
  return 0;
}
