#include <stdio.h>
#include <stdbool.h>

int main(){
	int a1, a2, a3, b1, b2, b3, c1, c2, c3, BaseAttack;
	int Dragon, Health, Round, Now;

	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d", &Round, &Dragon, &Health, &a1, &a2, &a3, &b1, &b2, &b3, &c1, &c2, &c3, &BaseAttack);

	int SpecialAttackA, SpecialAttackB, SpecialAttackC, Acd=a3, Bcd=b3, Ccd=c3, a31=0, b31=0, c31=0;

	int MaxDragon = Dragon;



	for(Now = 0;Now <= Round; Now++){

			SpecialAttackA = (Acd < a3)?0:(Acd-a31-a3 <= 0)? a1 : a1+a2*(Acd - a31 - a3);
			SpecialAttackB = (Bcd < b3)?0:(Bcd-b31-b3 <= 0)? b1 : b1+b2*(Bcd - b31 - b3);
			SpecialAttackC = (Ccd < c3)?0:(Ccd-c31-c3 <= 0)? c1 : c1+c2*(Ccd - c31 - c3);

		printf("%d %d %d ", SpecialAttackA, SpecialAttackB, SpecialAttackC);

		if(SpecialAttackA >= SpecialAttackB && SpecialAttackA >= SpecialAttackC){
			Dragon -= SpecialAttackA;
			Acd = 0;
			a31 = Now;
			// if(Now == 2){Acd++;}

		}else if(SpecialAttackB > SpecialAttackA && SpecialAttackB >= SpecialAttackC){
			Dragon -= SpecialAttackB;
			Bcd = 0;
			b31 = Now;

			// if(Now == 0){Bcd++;}

		}else if(SpecialAttackC > SpecialAttackA && SpecialAttackC > SpecialAttackB){
			Dragon -= SpecialAttackC;
			Ccd = 0;
			c31 = Now;

			// if(Now == 0){Ccd++;}

		}else{
			Dragon -= BaseAttack;
		}

		printf("%d\n", Dragon);

		if(Dragon <= 0){
			break;
		}

		Dragon += Health;

		if(Dragon > MaxDragon){
			Dragon = MaxDragon;
		}

		Acd++;
		Bcd++;
		Ccd++;

		if(Now < 2 && Acd > a3){Acd = a3;}
		if(Now < 2 && Bcd > a3){Bcd = b3;}
		if(Now < 2 && Ccd > a3){Ccd = c3;}
}
	return 0;

}
