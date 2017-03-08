#include<stdio.h>
#include<stdlib.h>

enum puzzle_t {
	one,
	two,
	three = 5,
	four,
	five = 13,
	six,
	seven = 23,
	eight = 37,
	nine,
	ten = 47,
};

int main(){
	int guess;

	scanf("%d", &guess);
	
	if(guess == one + two + three + four + five + six + seven + eight + nine + ten)
		puts("You solved it!");
}
