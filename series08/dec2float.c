#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float* dec2float(int n);
int* dec2bin(int N, int* n);
int poww(int exp, int m);


int main(int argc, char* argv[]) {

    int n;
    printf(" Enter any decimal number : ");
    scanf("%d",&n);

    float* b = dec2float(n);

    printf("\n %f x 10 ^ %f\n", b[0], b[1]);
    return 0;
}



float* dec2float(int n){
    int f = 0, count = 0, help = n;
    int* bin = &f, *cpoint = &count;

    while (help > 0){ // count numbers in binary
        help = help/2;
        count++;
    }

    float* m = malloc(2* sizeof(float));

    bin = dec2bin(n, bin); // number
    m[0] = (float)(*bin);

    while(m[0] > 10){ // normalisation
        m[0] = m[0] / 10;
    }

    cpoint = dec2bin(count, cpoint); //exponent
    m[1] = (float) *cpoint;

    return m;
}

int* dec2bin(int N, int* n){

    int ret = 0, f = 1, help;
    assert(N > 0);
    assert(N < 65536);

    while(N != 0){
        help = N %2;
        ret = ret + help * f;
        f = f* 10;
        N = N/2;

    }
    *n = ret;
    return n;
}


int poww(int exp, int m){
    int ret = exp;
    for(int i = 0; i < m; i++){
        ret = exp * exp;
    }
    return ret;
}

//eof
