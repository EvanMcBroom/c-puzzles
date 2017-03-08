#include<stdio.h>

union puzzle_t {
	int check;
	char guess[5];
};

int main(){
	union puzzle_t puzzle;

	scanf("%5s", puzzle.guess);

	if(puzzle.check == 0x11223344)
		puts("You solved it!");
}
