#include<stdio.h>

#define IN 1
#define OUT 0


int main(){

	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF){
		++nc;
		if (c == '\n'){
			++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t') {
		//example in book says c = '\t' this is the assignment operator instead of the comparrison operator
			state = OUT;
		}
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
//the program counts words as any input seperated by either space tab or new line but this includes chars such as ./!%$ as well as not detecting back space 
//
