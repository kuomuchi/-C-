#include <stdio.h>
int main()
{
  int n, m, a[102][102] = {0};
  int i, j;
  int r[5] = {0}, count;

  scanf("%d", &n);
  for(i = 1; i <= n; i++)
  for(j = 1; j <= n; j++)
    scanf("%d", &a[i][j]);

  for(i = 1; i <= n; i++)
  for(j = 1; j <= n; j++)
    if(a[i][j] == 1) {
      count = 0;
      if(a[i - 1][j] == 1) count++;
      if(a[i + 1][j] == 1) count++;
      if(a[i][j - 1] == 1) count++;
      if(a[i][j + 1] == 1) count++;
      if(count == 2 && a[i - 1][j] == a[i + 1][j]) count = 0;
      r[count]++;
    }

  for(i = 4; i >= 1; i--)
    printf("%d\n", r[i]);

}
