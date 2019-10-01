#include <stdio.h>

int main()
{
	int y, one, february, mon, days, output = 0;
	scanf("%d%d", &y, &one);
	february = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 3200 != 0))? 29 : 28;
    while (scanf("%d", &mon) != EOF && scanf("%d", &days) != EOF){
    	if(mon > 12 || mon < 1)
    		output = -1;
    	else if((mon <= 7 && (mon % 2) == 1 && days > 31 || days < 1) || (mon == 2 && days > february || days < 1) || (mon > 2 && mon <= 8 && mon % 2 == 1 && days > 30 || days < 1) || (mon >= 10 && mon % 2 == 0 && days > 31 || days < 1 ) || (mon >= 10 && mon % 2 == 1 && days > 30 || days < 1 ))
    		output = -2;
			else if(mon == 1)
				output = (days + (one - 1)) % 7;
			else if(mon == 2)
				output = ((days + 31) + (one - 1) )% 7;
			else if(mon == 3)
				output = ((days + 31 + february) + (one - 1) )% 7;
			else if(mon == 4)
				output = ((days + 62 + february) + (one - 1) )% 7;
			else if(mon == 5)
				output = ((days + 62 + 30 + february) + (one - 1)) % 7;
			else if(mon == 6)
				output = ((days + 93 + 30 + february) + (one - 1) )% 7;
			else if(mon == 7)
				output = ((days + 93 + 60 + february) + (one - 1) )% 7;
			else if(mon == 8)
				output = ((days + 124 + 60 + february) + (one - 1) )% 7;
			else if(mon == 9)
				output = ((days + 155 + 60 + february) + (one - 1) )% 7;
			else if(mon == 10)
				output = ((days + 155 + 90 + february) + (one - 1) )% 7;
			else if(mon == 11)
				output = ((days + 186 + 90 + february) + (one - 1) )% 7;
			else if(mon == 12)
				output = ((days + 186 + 120 + february) + (one - 1) )% 7;
		printf("%d\n", output);

    }


	return 0;
}
