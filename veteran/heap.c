#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char *input;
	int size, *check;

	srandom(time(NULL));
	size = random() % 1024;

	input = (char *)malloc(size);
	check = (int *)malloc(sizeof(int));

	scanf("%2048s", input);
	
	if(*check == 0xAABBCCDD)
		puts("You solved it!");

	exit(0);
}
