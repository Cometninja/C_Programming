#include <stdio.h>

int main(){
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 
	//sets lower limit of fahr
	upper = 300; 
	//sets upper limit of fahr
	step = 20;	
	//sets increment 

	fahr = lower; 	
	//assigns lower to fahr
	
	printf("welcome to the fahrenheit to celsuis converter\n");

	while (fahr <= upper){ 	
		//enters loop while upper is less than or equal to fahr
		celsius = (5.0/9.0) * (fahr - 32.0); 
		//sets celsius with conversion formula 
		printf("%3.0ff %6.1fc\n",fahr,celsius); 
		//prints to screen the results using formating
		fahr = fahr + step;			
		//increments fahr by step
	}
}

