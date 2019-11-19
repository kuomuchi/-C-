#include <stdio.h>

int main() {
    int n, map[102][102];
    int end = 0, turn = 0, t = 0, cross = 0;
    int up, down, left, right;
    int amount;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (map[i][j] == 0) {
                continue;
            }
            up = (map[i - 1][j] == 1)? 1 : 0;
            down = (map[i + 1][j] == 1)? 1 : 0;
            left = (map[i][j - 1] == 1)? 1 : 0;
            right = (map[i][j + 1] == 1)? 1 : 0;
            amount = up + down + left + right;
            if (up == down && left == right && up != right) {
                continue;
            }
            switch(amount) {
                case 1:
                    end++;
                    break;
                case 2:
                    turn++;
                    break;
                case 3:
                    t++;
                    break;
                case 4:
                    cross++;
                    break;
            }
        }
    }
    printf("%d\n%d\n%d\n%d\n", cross, t, turn, end);
    return 0;
}
