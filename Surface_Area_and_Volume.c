#include <stdio.h>
int main(){
  int h, w, d, a, b;
  scanf("%d%d%d",&h, &w, &d) ;
  a = (h*w + w*d + d*h)*2;
  b = h*w*d;
  printf("%d\n%d", a, b);
	return 0;
}
