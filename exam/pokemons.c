#include <stdio.h>

int main() {
	int pokemon;
	int i = 0;
	int wind = 0, fire = 0, water = 0;

	int highest = 0, leader = 0, leaderSum = 0;

	int k;
	scanf("%d\n", &k);

	while (scanf("%d", &pokemon) != EOF) {
		if (wind >= k && fire >= k && water >= k) {
			i = 0;
			leaderSum += leader;
			leader = 0;
			highest = 0;
			wind = 0;
			fire = 0;
			water = 0;
		}

		if (pokemon % 3 == 0) {
			wind++;
		} else if (pokemon % 3 == 1) {
			fire++;
		} else {
			water++;
		}

		if (pokemon > highest) {
			leader = highest;
			highest = pokemon;
		} else if (pokemon <= highest && pokemon > leader) {
			leader = pokemon;
		}

		i++;
	}

	leaderSum += (i != 1)? leader : highest;

	printf("%d\n", leaderSum);
}
