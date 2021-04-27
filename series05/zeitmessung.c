#include <stdio.h>
#include <math.h>
#include <time.h>

double calcA (int n);
double calcB (int n);


int main(int argc, char* argv[]) {
	int n = 7;
	
	clock_t start = 0;
    clock_t runtime = 0;
    clock_t previous_runtime = 0;
    clock_t quadratic = 0;
    
	printf( "n | result a | run a | result b | run b | result a²| run a² \n");
	for (int i = 0; i <= n; i++){
	
	double a = calcA(i);
	runtime = start - clock();
	
	// aufwand bei a^2 == (1 + 4n) ^2 == 16n^2 + 8n + 1
	
	double b = calcB(i);
	previous_runtime = runtime - clock();
	
	double c = calcA(i)*calcA(i);
	quadratic = previous_runtime - clock();
	
	printf( "%d | %lf | %ld | %lf | %ld | %lf | %ld \n", i,a, runtime, b, previous_runtime, c, quadratic);  
	}

    return 0;
}



double calcA(int n){ // aufwand 1 + 4n
	double ret = 0; //1 
	for(int i = 0; i <= n; i++){ //n
		ret = ret + 1./pow(i+1, 2); //4
	}
	return ret; 
}

double calcB(int n){ // aufwand = 1 + 7*n^2
	double ret = 0, help1, help2, help3; // 1
	for(int i = 0; i <= n; i++){ // n 
		for(int k = 0; k <= i; k++){ // n 
			help1 = pow(k+1,2);
			help2 = pow(i-k+1,2);
			help3 = help1* help2;
			ret = ret + 1./help3;  
		}
		//printf("help1 = %lf, help2 = %lf, help3 = %lf\n", help1, help2, help3);
		//printf("ret = %lf\n", ret);
	}
	return ret; 
}
