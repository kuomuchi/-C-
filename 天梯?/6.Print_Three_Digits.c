#include <stdio.h>
int main(){
  int x, a, b, c;
  scanf("%d", &x);

  if(x > 99 && x < 1000){
    //個位數
    a = x % 10;
    b = ((x % 100) - a) / 10;
    c = (x - (x % 100)) / 100;

    printf("%d\n%d\n%d\n", c, b, a);


  }else{
    return 0;
  }

}
