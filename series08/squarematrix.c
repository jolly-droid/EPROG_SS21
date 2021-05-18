#include "squarematrix.h"

int main(int argc, char* argv[]) {
    int number = 0;
    
    SquareMatrix* test0 = newSquareMatrix(5);
    SquareMatrix* test1 = newSquareMatrix(3);


    /*printf("matrix 1 initialized, dim1: %d, dim2: %d \n", getSquareMatrixN(test0), getSquareMatrixN(test0));
    printSquareMatrix(test0);
    printf("matrix 2 initialized, dim1: %d, dim2: %d \n", getSquareMatrixN(test1), getSquareMatrixN(test1));
    printSquareMatrix(test1);*/
    
    //random numbers
    for(int i = 0; i < getSquareMatrixN(test1); i ++){
        for(int j = 0; j < getSquareMatrixN(test1); j ++){
            number = (rand() % (10 - 1 + 1)) + 1; //  number = (rand() % (upper - lower + 1)) + lower
            setSquareMatrixEntry(test1, i,j, number);
        }
    }
    
    
     //random numbers
    for(int i = 0; i < getSquareMatrixN(test1); i ++){
        for(int j = 0; j < getSquareMatrixN(test1); j ++){
            number = (rand() % (10 - 1 + 1)) + 1; //  number = (rand() % (upper - lower + 1)) + lower
            setSquareMatrixEntry(test0, i,j, number);
        }
    }
    printf("matrix 1 with rndm numbers, dim1: %d, dim2: %d \n", getSquareMatrixN(test0), getSquareMatrixN(test0));
    printSquareMatrix(test0);
    printf("matrix 2 with rndm numbers, dim1: %d, dim2: %d \n", getSquareMatrixN(test1), getSquareMatrixN(test1));
    printSquareMatrix(test1);


    delSquareMatrix(test0);
    delSquareMatrix(test1);


    return 0;
}



SquareMatrix* newSquareMatrix(int n){

    assert(n != 0);
    SquareMatrix* new = malloc(sizeof(SquareMatrix));
    new->entries = malloc((n*n)*sizeof(double));

    new->n = n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            setSquareMatrixEntry(new,i,j,0);
        }
    }
    return new;
}

SquareMatrix* delSquareMatrix(SquareMatrix* A){
    assert(A != NULL);
    free(A);
    return NULL;
}

void printSquareMatrix(SquareMatrix* A){
    assert(A != NULL);
    for(int i = 0; i < getSquareMatrixN(A); i++){
        for(int j = 0; j < getSquareMatrixN(A); j++){
            printf(" %lf ", getSquareMatrixEntry(A,i,j));
        }
        printf("\n");
    }
    printf("\n");
}


int getSquareMatrixN(SquareMatrix* A){
    assert(A != NULL);
    return A->n;
}

double getSquareMatrixEntry(SquareMatrix* A, int j, int k){
    assert(A != NULL);
    assert(j >= 0);
    assert(k >= 0);
    assert(j < getSquareMatrixN(A));
    assert(k < getSquareMatrixN(A));
    return A->entries[j+k*getSquareMatrixN(A)];
}

void setSquareMatrixEntry(SquareMatrix* A, int j, int k, double x){
    assert(A != NULL);
    assert(j >= 0);
    assert(k >= 0);
    assert(j < getSquareMatrixN(A));
    assert(k < getSquareMatrixN(A));

    A->entries[j+k*getSquareMatrixN(A)] = x;

}
