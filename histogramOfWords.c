#include <stdio.h>

#define MAX_LENGTH 10


int main(){
	int lengthOfWords[MAX_LENGTH];
	int c, length, i;

	length = 0;

	while((c = getchar())!= EOF){
		putchar(c);
		if( c == '\n' || c == '\t' || c == ' '){	
			++lengthOfWords[length];
			length = 0;	
		}
		else {
			++length;
		}
		
	}
	for(i = 0; i < MAX_LENGTH;++i){
		printf("%d,",lengthOfWords[i]);
	}
	printf("\b\n");
}

