#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct puzzle_t {
	int check, guess;
	char format[1024];
};

int main(){
	char input[512];
	struct puzzle_t puzzle;

	srandom(time(NULL));
	puzzle.check = random();

	do {
		scanf("%512s", input);
		sprintf(puzzle.format, "Your input was: %s\n", input);
		printf(puzzle.format);

		puzzle.guess = atoi(input);
	} while(puzzle.guess != puzzle.check);

	puts("You solved it!");
}
