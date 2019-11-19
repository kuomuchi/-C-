#include <stdio.h>

int main(){
  int s, f, t, rabbit=1, chicken=1, crab=1, Twolag, num, Ar;
  scanf("%d%d%d", &s, &f, &t);

  crab = s-t;
  Twolag = f - crab*8;
  num = s - crab;

  rabbit = (Twolag - num*2)/2;

  // rabbit + chicken = num;
  // rabbit*4 + chichen*2 = Twolag;

  chicken = s - (crab+rabbit);

  printf("%d\n%d\n%d", chicken, rabbit, crab);

}
