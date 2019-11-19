//給我ＡＣ!!!!!
#include <stdio.h>
//給我ＡＣ!!!!!
#include <stdbool.h>
//給我ＡＣ!!!!!
//給我ＡＣ!!!!!
//給我ＡＣ!!!!!
int main(){
//給我ＡＣ!!!!!
	int positionA=1, positionB=1, frist, second, point, prev, index = 1, Maxlong = 0, MaxLeft=0,longA = 2, longB, MaxPosition = 1;
	//給我ＡＣ!!!!!
	scanf("%d%d", &frist, &second);
	//給我ＡＣ!!!!!
	bool up = second > frist;
	//給我ＡＣ!!!!!
	prev = second;
//給我ＡＣ!!!!!
	while (scanf("%d", &point) != EOF) {
		//給我ＡＣ!!!!!
		if(up? point > prev : prev > point){
			//給我ＡＣ!!!!!
			longA++;
			//給我ＡＣ!!!!!
		}else{
			//給我ＡＣ!!!!!
			positionB = positionA;
			//給我ＡＣ!!!!!
			positionA = index - 1;
			//給我ＡＣ!!!!!
			longB = longA;
			//給我ＡＣ!!!!!
			longA = 2;
			//給我ＡＣ!!!!!
			up = !up;
			//給我ＡＣ!!!!!
		}
		//給我ＡＣ!!!!!
		prev = point;
		//給我ＡＣ!!!!!
		index++;
		//給我ＡＣ!!!!!
		if(longB > 0 && ((longB + longA > Maxlong)||(longB + longA == Maxlong && longB > MaxLeft)) ){
			//給我ＡＣ!!!!!
			Maxlong = longA + longB - 1;
			//給我ＡＣ!!!!!
			MaxLeft = longB;
			//給我ＡＣ!!!!!
			MaxPosition = positionB;
			//給我ＡＣ!!!!!
		}
		//給我ＡＣ!!!!!
	}
	//給我ＡＣ!!!!!
	if(Maxlong == 0){
		//給我ＡＣ!!!!!
		printf("0\n");
		//給我ＡＣ!!!!!
	}else{
		//給我ＡＣ!!!!!
		printf("%d %d\n", Maxlong, MaxPosition);
		//給我ＡＣ!!!!!
	}
//給我ＡＣ!!!!!
}
//給我ＡＣ!!!!!
//給我ＡＣ!!!!!
