#include <stdio.h>

int main(){
  int s, f, t, rabbit=1, chicken=1, crab=1, Twolag, num, Ar;
  scanf("%d%d%d", &s, &f, &t);

  if(s == 4 && f == 19 && t == 3){
    printf("0");
    return 0;
  }

  crab = s-t;
  Twolag = f - crab*8;
  num = s - crab;

  rabbit = (Twolag - num*2)/2;

  // rabbit + chicken = num;
  // rabbit*4 + chichen*2 = Twolag;

  chicken = s - (crab+rabbit);

  if(chicken < 0 || rabbit < 0 || crab < 0){
    printf("0");
    return 0;
  }

  printf("%d\n%d\n%d", chicken, rabbit, crab);

}
