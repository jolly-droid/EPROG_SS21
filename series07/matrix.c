#include <stdio.h>
#include "matrix.h"

int main(int argc, char* argv[]) {
    int number = 0;
    Matrix* test0 = newMatrix(5,5);
    Matrix* test1 = newMatrix(3,3);
    Matrix* test2 = newMatrix(3,5);

    printf("------------aufgabe 6-----------\n");
    printf("matrix 1 initialized, dim1: %d, dim2: %d \n", getMatrixM(test0), getMatrixN(test0));
    printMatrix(test0);
    printf("matrix 2 initialized, dim1: %d, dim2: %d \n", getMatrixM(test1), getMatrixN(test1));
    printMatrix(test1);
    printf("matrix 3 initiailized,  dim1: %d, dim2: %d \n", getMatrixM(test2), getMatrixN(test2));
    printMatrix(test2);

//random numbers
    for(int i = 0; i < getMatrixM(test1); i ++){
        for(int j = 0; j < getMatrixM(test1); j ++){
            number = (rand() % (10 - 1 + 1)) + 1; //  number = (rand() % (upper - lower + 1)) + lower
            setMatrixEntry(test1, i,j, number);
        }
    }

//random numbers
    for(int i = 0; i < getMatrixM(test2); i ++){
        for(int j = 0; j < getMatrixM(test2); j ++){
            number = (rand() % (10 - 1 + 1)) + 1;
            setMatrixEntry(test2, i,j, number);
        }
    }

    printf("matrix 2 with rdnm numbers, dim1: %d, dim2: %d \n", getMatrixM(test1), getMatrixN(test1));
    printMatrix(test1);
    printf("matrix 3 with rndm numbers, dim1: %d, dim2: %d \n", getMatrixM(test2), getMatrixN(test2));
    printMatrix(test2);

    printf("------------aufgabe 7-----------\n");

    Matrix* m = matrixMatrix(test1, test2);
    printf("matrix multiplied\n \n m = M1*M2 dim1: %d, dim2: %d \n", getMatrixM(m), getMatrixN(m));
    printMatrix(m);

    printf("------------aufgabe 8-----------\n");
    Vector* a = newVector(3);

    a->entries[0] = 1;
    a->entries[1] = 2;
    a->entries[2] = 3;

    Vector* v = matrixVector(test1, a);

    printf("m* v is vector: \n");
    printVector(v);


    delMatrix(m);
    delMatrix(test0);
    delMatrix(test1);
    delMatrix(test2);

    printMatrix(m); // reagiert nicht weil matrix gelöscht!!

    return 0;
}



Matrix* newMatrix(int m, int n){
    assert(m != 0);
    assert(n != 0);
    Matrix* new = malloc(sizeof(Matrix));
    new->entries = malloc((m*n)*sizeof(double));
    new->m = m;
    new->n = n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            setMatrixEntry(new,i,j,0);
        }
    }
    return new;
}

Matrix* delMatrix(Matrix* A){
    assert(A != NULL);
    free(A);

    return NULL;
}

void printMatrix(Matrix* A){
    assert(A != NULL);
    for(int i = 0; i < getMatrixM(A); i++){
        for(int j = 0; j < getMatrixN(A); j++){
            printf(" %lf ", getMatrixEntry(A,i,j));
        }
        printf("\n");
    }
    printf("\n");
}

int getMatrixM(Matrix* A){
    assert(A != NULL);
    return A->m;
}

int getMatrixN(Matrix* A){
    assert(A != NULL);
    return A->n;
}

double getMatrixEntry(Matrix* A, int j, int k){
    assert(A != NULL);
    assert(j >= 0);
    assert(k >= 0);
    assert(j < getMatrixM(A));
    assert(k < getMatrixN(A));
    return A->entries[j+k];
}

void setMatrixEntry(Matrix* A, int j, int k, double x){
    assert(A != NULL);
    assert(j >= 0);
    assert(k >= 0);
    assert(j < getMatrixM(A));
    assert(k < getMatrixN(A));

    A->entries[j+k*getMatrixM(A)] = x;

}

Matrix* matrixMatrix(Matrix* A, Matrix* B){
    assert(getMatrixN(A) == getMatrixM(B));


    Matrix* new = newMatrix(getMatrixM(A), getMatrixN(B));
    double* b = B->entries;
    double* a = A->entries;
    int M = getMatrixM(A);
    double* c = new->entries;

    for(int i = 0; i < M ; i++){
        c[i] = 0;
        for(int k= 0; k < getMatrixN(A); k++ ){
            c[i] = c[i] + a[i+k*M]*b[i+k*M];
        }
    }

    return new;

}

Vector* matrixVector(Matrix* A, Vector* B){
    int M = getMatrixM(A);
    assert(M == B->m);
    Vector* new = newVector(M* getMatrixN(A)); //malloc((M* getMatrixN(A))*sizeof(Vector));
    double* b = new->entries;
    double* a = A->entries; // pointer to matrix
    double* x = B->entries; //pointer to vector
    assert(x!= NULL);
    assert(b != NULL);
    assert(a != NULL);
    assert(new != NULL);
    for(int i = 0; i < M ; i++){
        b[i] = 0;
        for(int k= 0; k < getMatrixN(A); k++ ){
            b[i] = b[i] + a[i+k*M]*x[k];
        }
    }

    return new;

}

Vector* newVector(int m){
    assert(m != 0);

    Vector* new = malloc(sizeof(Vector));
    new->entries = malloc((m)*sizeof(double));
    new->m = m;


    for(int i = 0; i < m; i++){
        new->entries[i] = 0;
    }
    return new;
}

void printVector(Vector* A){
    assert(A != NULL);
    for(int j = 0; j < A->m; j++) {
        printf(" %lf ", A->entries[j]);
    }
    printf("\n");
}
