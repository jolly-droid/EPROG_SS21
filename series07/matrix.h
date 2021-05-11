#include <stdlib.h>
#include <assert.h>

typedef struct Matrix_{
    int m;
    int n;
    double* entries;
}Matrix;

typedef struct vector_{
    int m;
    double* entries;
}Vector;

Matrix* newMatrix(int m, int n);

Matrix* delMatrix(Matrix* A);

void printMatrix(Matrix* A);

int getMatrixM(Matrix* A);

int getMatrixN(Matrix* A);

double getMatrixEntry(Matrix* A, int j, int k);

void setMatrixEntry(Matrix* A, int j, int k, double x);

//ex7

Matrix* matrixMatrix(Matrix* A, Matrix* B);

//ex 8Ve
Vector* matrixVector(Matrix* A, Vector* B);
Vector* newVector(int m);
void printVector(Vector* A);

//eof

