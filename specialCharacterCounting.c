#include <stdio.h>

int main(){

	int c,tabCount,blankCount,newLineCount;

	tabCount = 0;
	blankCount = 0;
	newLineCount = 0;

	while((c=getchar()) != EOF){
		if(c == '\t'){
			++tabCount;
		}
	else if(c == '\n'){
	       		++newLineCount;
		}
	       	else if(c == ' '){
 			++blankCount;
		}
	}

	printf("\n*************************\n");
	printf("The tab Count is %d\nThe blank count is %d\nThe new line count is %d\n",tabCount,blankCount,newLineCount);
}
