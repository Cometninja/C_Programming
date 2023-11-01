#include <stdio.h>

#define BASE 2
#define N 5

int power(int base,int n);
void test();

int main(){
	printf("%d\n",power(BASE,N));	
	test();
}

int power(int base,int n){
	int i, p;

	p = 1;

	for(i = 0; i < n; i++){
	       p = p * base;
	}
	return p;	
}

void test(){
	printf("you should see me\n");
	return;
	printf("but you never reach me\n");
}

