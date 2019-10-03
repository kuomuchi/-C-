#include <stdio.h>
int main() {
 int a, b, v, w, x, y, z, p, d, num1, num2, num3;
 p = 1;
 d = 0;
scanf("%d%d%d%d%d%d%d", &a, &b, &v, &w, &x, &y, &z);
num1 = a;
 num2 = (num1 % 2 == 0)? w : v;
 num3 = (num2*p > d*num1)? num2 : d;
 p = (num2*p > d*num1)? num1 : p;
 d = num3;
num1 = a+1;
 num2 = (num1 % 2 == 0)? w : v;
 num3 = (num2*p > d*num1)? num2 : d;
 p = (num2*p > d*num1)? num1 : p;
 d = num3;
num1 = b;
 num2 = (num1 % 3 == 0)? x : (num1 % 3 == 1)? y : z ;
 num3 = (num2*p > d*num1)? num2 : d;
 p = (num2*p > d*num1)? num1 : p;
 d = num3;
num1 = b+1;
 num2 = (num1 % 3 == 0)? x : (num1 % 3 == 1)? y : z ;
 num3 = (num2*p > d*num1)? num2 : d;
 p = (num2*p > d*num1)? num1 : p;
 d = num3;
num1 = b+2;
 num2 = (num1 % 3 == 0)? x : (num1 % 3 == 1)? y : z ;
 num3 = (num2*p > d*num1)? num2 : d;
 p = (num2*p > d*num1)? num1 : p;
 d = num3;
printf("%d\n", p);
}
