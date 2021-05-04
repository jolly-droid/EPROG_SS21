#ifndef INCLUDE_DYNAMICVECTORS__
#define INCLUDE_DYNAMICVECTORS__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// allocate dynamic double vector of length n and read
// entries from keyboard
double* scanVector(int n);

// allocate + initialize dynamic double vector of length n
double* mallocVector(int n);

// free a dynamic vector and set the pointer to NULL
double* freeVector(double* vector);

// extend dynamic double vector and initialize new entries
double* reallocVector(double* vector, int n, int nnew);


// print dynamic double vector of length n to shell
void printVector(double* vector, int n);


//MATRICIES

// allocate + initialize dynamic double matrix of length n
double* mallocMatrix(int n, int m);

// free a dynamic vector and set the pointer to NULL
double* freeMatrix(double* matrix);

// extend dynamic double vector and initialize new entries
double* reallocMatrix(double* matrix, int n, int m, int nnew, int mnew);

// allocate dynamic double vector of length n and read
// entries from keyboard
double* scanMatrix(int n, int m);

// print dynamic double vector of length n to shell
void printMatrix(double* matrix, int n, int m);


//new functions
double* matrixVectorProduct( double* matrix, int mMat, int nMat, double* vector, int nVec);

double matrixNorm(double* matrix, int m, int n);

#endif
