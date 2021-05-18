#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

typedef struct SquareMatrix_ { 
int n;
double * entries;
}SquareMatrix;


SquareMatrix* newSquareMatrix(int n);

SquareMatrix* delSquareMatrix(SquareMatrix* A);

void printSquareMatrix(SquareMatrix* A);

int getSquareMatrixN(SquareMatrix* A);

double getSquareMatrixEntry(SquareMatrix* A, int j, int k);

void setSquareMatrixEntry(SquareMatrix* A, int j, int k, double x);
