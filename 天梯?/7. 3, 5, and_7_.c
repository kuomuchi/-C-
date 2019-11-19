#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  if(a%3==0 && a%5==0 && a%7==0){
    printf("1");
  }else if(a%3==0 && a%5==0){
    printf("0");
  }else{
    printf("1");
  }

  return 0;
}
