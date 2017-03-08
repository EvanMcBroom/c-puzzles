#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void Hangup(){
	puts("You solved it!");
	exit(0);
}

int main(){
	signal(SIGHUP, Hangup);
	while(1);
}
