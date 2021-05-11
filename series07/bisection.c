#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

double* f(int a);
double bisection(int a,int b,int tau);
int betrag(int n);

int main(int argc, char* argv[]) {

	int a, b, tau;
	
	printf("please insert a: ");
	scanf("%d", &a);
	
	printf("please insert b: ");
	scanf("%d", &b);
	
	printf("please insert tau: ");
	scanf("%d", &tau);
	
	bisection(a,b,tau);
}

double bisection(int a,int b,int tau){
	double c = (a+b)/2.;
	if((*f(a))*(*f(c)) <= 0){
		b = c;
	}else if((*f(b))*(*f(c)) <= 0){
		a = c;
	}
	
	if(betrag(b-a) < tau){
		return a;
	}else{
		return bisection(a,b,tau);
	}
	
}

double* f(int a){ // x*x + 3
	double ret = a*a+3;
	return &ret;
}

int betrag(int n){
	if(n < 0){
		return -1*n;
	}else{
		return n;
	}

}



//eof
