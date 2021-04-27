#include <stdio.h>
#include <time.h>


double energy(double x[], int n);


int main(int argc, char* argv[]) {
   int n = 5;
   
   //scan the vectors
    double v1[n];
    printf("please insert the vector \n");
    for(int i = 0; i < n; i++){
    	scanf("%lf", &v1[i]);
    }
    
    double res = energy(v1, n);
    
    printf("the energy is %lf ", res);

    return 0;
}

double energy(double x[], int n){
	double ret = 0, help = 1; // 1
	for(int i = 0; i < n; i++){ //2*(n-1)
		help = x[i] * x[i]; 
		ret = ret + help; // 2
	}
	return ret;
}


/*
aufwand für berechung der energie =  1+ 2*(n-1);
n = 10^3 laufzeit von 3 sek
n = 10^4 laufzeit von unter 4 sek


*/

