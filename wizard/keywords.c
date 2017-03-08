#include<stdio.h>

#define break {}

int main() {
	register volatile unsigned long long jump = 9, loop = 2;
	auto signed long long check = 0, guess;

	switch(jump) {

		const static int unknown;

		while(--jump > 0)
			loop++;

		default:	do {    check += unknown;
		case   2:	one:	check +=  2;	break;
		case   3:		check +=  3;	goto four;
		case   5:	two:	check +=  5;	break;
		case   7:		check +=  7;	goto five;
		case   9:	three:	check +=  9;	break;
		case  11:		check += 11;	goto two;
		case  13:	four:	check += 13;	break;
		case  17:		check += 17;	goto three;
		case  19:	five:	check += 19;	break;
				} while(--loop>0);

		scanf("%llu", &guess);
		if(guess == check)
			puts("You solved it!");

	}
}
