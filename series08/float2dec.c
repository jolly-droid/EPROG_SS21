#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXSIZE 32

int float2dec(int* bin, int m, int exp);
int poww(int exp, int m);
int bin2dec(int n);
int* toArray(int number, int mantisse);


int main(int argc, char* argv[]) {

    int n, exp;
    float f;
    printf(" Enter number in binary: \n");
    scanf("%f",&f);

    printf("Enter mantisse: \n ");
    scanf("%d",&n);

    printf("Enter exponent: \n ");
    scanf("%d",&exp);
    
    
   	int* g = toArray(f,n);

    float b = float2dec(g, n, exp);
    printf(" %f \n", b);

    return 0;
}



int float2dec(int* bin, int m, int exp){
	
	int x = 0, h = 0; //j = 1;
	for(int i = 1; i < m; i++){
		//j = j/2;
		h = poww(2,(-1)*i);
		x = x + bin[i]* h;
	}
	
	int p = poww(2,exp);
	x = x*p;
   
    return x;
}


int poww(int exp, int m){
    int ret = exp;
    for(int i = 0; i < m; i++){
        ret = exp * exp;
    }
    return ret;
}


int* toArray(int number, int mantisse){
	int n = mantisse;
	int* array  = malloc(n*sizeof(int));
	
	for (int i = n; i >= 0; i--) {
    array[i] = number % 10;
    number /= 10;
	}
	
	return array;
}

//eof

/*
int bin2dec(int n){

    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * poww(2, i);
        ++i;
    }
    return dec;
}


float float2decc(float bin, int m, int exp){

    bin = (float) bin2dec(bin);
    exp = bin2dec(exp);
    printf("bin: %f, dec: %d", bin, exp);

    for (int i = 1; i < m; ++i) {
        ret = ret
    }
    ret = ret * poww(2,exp);
    bin = bin* dec;
   // m = poww(exp,m);
   // bin = bin * (float) m;

    return bin;
}
*/
