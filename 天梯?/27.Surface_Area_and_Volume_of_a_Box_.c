#include <stdio.h>
int main(){
  int a, b, c, d, e, surface_area, volume;
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

  //其中一邊的梯形，這太廢了。
  int xyTrapezoid = (c+(c-2*e))*e/2;

  int xzTrapezoid = (a+(a-2*e))*e/2;

  int yzTrapezoid = (b+(b-2*e))*e/2;


  // 其中一邊內側的四邊形
  int xyQuadrilateral = (a-2*e)*(c-2*e);

  //其中一邊內側的四邊形
  int xzQuadrilateral = (a-2*e)*(b-2*e);

  //其中一邊內側的四邊形
  int zyQuadrilateral = (b-2*e)*(c-2*e);



  //其中一邊邊側四邊形
  int xylong = ((a-2*e)*d)+((c-2*e)*d);

  //其中一邊邊側四邊形
  int xzlong = ((a-2*e)*d)+((b-2*e)*d);

  //其中一邊邊側四邊形
  int zylong = ((c-2*e)*d)+((b-2*e)*d);


  //體積



  //表面積，這個算法實在是太高智商了啊！！！！(a*b + a*c + c*b)*2
  surface_area = 4*(xylong+xzlong+zylong) + 8*(xyTrapezoid+xzTrapezoid+yzTrapezoid) + 2*(xyQuadrilateral+xzQuadrilateral+zyQuadrilateral);

  //這實在是太高智商了。
  volume = a*b*c-d*(a-2*e)*(c-2*e)*2- d*(b-2*e)*(c-2*e)*2-d*(b-2*e)*(a-2*e)*2;


  printf("%d\n%d\n", surface_area, volume);

  return 0;

}
