#include <stdio.h>
#include <assert.h>

int* dec2bin(int N, int* n);

int main(int argc, char* argv[]) {

    int* bin;
    int dec;
    printf("Enter any decimal number: \n ");
    scanf("%d",&dec);
    bin = dec2bin(dec, &dec);
    printf("The Binary value is : %d\n", *bin);
    return 0;
}



int* dec2bin(int N, int* n){

    int ret = 0, f = 1, help;

    assert(N > 0);
    assert(N < 65536);

    while(N != 0){
    
        help = N %2; // basis 2, 0 or 1
        
        ret = ret + help * f; // add number to return value
        f = f* 10; // multiply with 10 so that we stay in "binary"
        
        N = N/2; //basis

    }
    *n = ret;
    return n;
}
