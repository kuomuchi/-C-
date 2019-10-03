#include <stdio.h>
int main() {
 int a, b, c, d, e, f, g, ar1, ar2;
 scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);

 ar1 = a+b+c+d+(a+b+c)*e+(c+d)*f+e*g+g+f;
 ar2 = a*e*g + b*e*g + c*e*g + c*f + d*f;


 printf("%d\n", ar1);
 printf("%d\n", ar2);
 // printf("%d%d%d%d%d%d%d", a, b, c, d, e, f, g);

 return 0;
}
