#include <stdio.h>


int main(){
  int y, x, num, i, j, dice=0, testup, testdown;
  scanf("%d%d", &y, &x);
  int array[y][x];

    for(i=0; i<y; i++){
      // printf("\n");
      for(j=0; j<x; j++){
        scanf("%d", &num);
        array[i][j]=num;

        //測試
        // printf("%d ", num);
      }
    }

    for(i=1; i < y-1; i++){
      for(j=0; j < x-3; j++){

        //確保4個數字都不一樣。
        if(array[i][j] != array[i][j+1] && array[i][j] != array[i][j+2] && array[i][j] != array[i][j+3] && array[i][j+1] != array[i][j+2] && array[i][j] != array[i][j+3] && array[i][j+2] != array[i][j+3]){
          //確保橫排的數字是可以的。
          if(array[i][j]+array[i][j+2] == 7 && array[i][j+1]+array[i][j+3] == 7){

            //確認上排的數字沒有跟中橫排重複到。
            for(testup=j; testup <= j+3; testup++){

              //確認上排的數字沒有跟中橫排重複到。
              if(array[i-1][testup] != array[i][j] && array[i-1][testup] != array[i][j+1] && array[i-1][testup] != array[i][j+2] && array[i-1][testup] != array[i][j+3]){

                //如果沒有重複，則檢查現下排。
                for(testdown=j; testdown <= j+3; testdown++){

                  //如果沒有重複，則檢查現下排。
                  if(array[i-1][testup] + array[i+1][testdown] == 7){

                    //debug
                    // printf("\n\n%d %d\n\n", array[i-1][testup], array[i+1][testdown]);

                    dice++;
                  }
                }
              }
            }
          }
        }
      }
    }

  printf("%d\n", dice);
}
