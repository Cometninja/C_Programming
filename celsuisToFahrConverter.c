#include <stdio.h>

int main(){

	printf("celsuis to fahr converter\n");

	int celsuis;
	
	for(celsuis = 300; celsuis >= 0;celsuis -= 20){
		printf("%3dc %6.1ff\n",celsuis,(celsuis *9.0/5.0) + 32);
	}
}

