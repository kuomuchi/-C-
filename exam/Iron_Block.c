#include <stdio.h>
// int main() {
//  int a,b,c,d,e,f,g,ar1,math;
// scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
//  if(a*b*c <= e*f*g)
//      ar1 = 0;
// else
//       if(d < g && (e*f*d)/a*b < g)
//           ar1 = (e*f*d)/(a*b-(a-e)*(b-f)) + d;
// else
//          ar1 = (e*f*g)/(a*b) + d;
// printf("%d",ar1);
//  return 0;
// }
// int main()
// {
//   int tWidth, tLength, tHeight, waterHeight, bWidth, bLength, bHeight;
//   scanf("%d%d%d%d%d%d%d", &tWidth, &tLength, &tHeight, &waterHeight, &bWidth, &bLength, &bHeight);
//   int water = tWidth * tLength * waterHeight;
//   int tankArea = tWidth * tLength;
//   int blockArea = bWidth * bLength;
//   int depth;
//
//   if (water == 0) {
//     printf("0\n");
//   } else {
//     if (tankArea == blockArea) {
//       if (bHeight >= tHeight)
//     depth = 0;
//       else
//     depth = bHeight + water / tankArea;
//     } else {
//       int areaAround = tankArea - blockArea;
//       if (water <= areaAround * bHeight)
//     depth = water / areaAround;
//       else
//     depth = bHeight + (water - areaAround * bHeight) / tankArea;
//     }
//     if (depth >= tHeight)
//       depth = tHeight;
//
//     printf("%d\n", depth);
//   }
// }
