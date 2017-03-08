#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
	char input[16];
	int guess, check;

	srandom(time(NULL));
	check = random() | 1 << sizeof check * 8 - 1;

	printf("%d\n", check);

	scanf("%16s", input);
	if(strchr(input, '-'))
		return 0;

	guess = atoi(input);
	if(guess == check)
		puts("You solved it!");
}
