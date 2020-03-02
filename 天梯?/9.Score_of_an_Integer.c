#include <stdio.h>

main(){
  int x, Aws=0;
  scanf("%d", &x);
  if(x <= 0){
    Aws = Aws -100;
    printf("%d", Aws);
    return 0;
  }

  if(x % 3 == 0){
    Aws = Aws + 3;
  }
  if(x % 5 == 0){
    Aws = Aws + 5;
  }

  if(x >= 100 && x <= 200){
    Aws = Aws + 50;
  }else if(x > 0){
    Aws = Aws -50;
  }

  printf("%d", Aws);

}
