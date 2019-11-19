#include <stdio.h>

int c_n_get_m (int n, int m)
{
	int result = 1, i;
	for (i = n; i > (n - m); i--)
		result *= i;
	for (i = 1; i <= m; i++)
		result /= i;
	return result;
}

int main(void)
{
	int n, m, i, ans = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i <= m; i++)
		ans += c_n_get_m(n, i);
	printf("%d\n", ans);
	return 0;
}
