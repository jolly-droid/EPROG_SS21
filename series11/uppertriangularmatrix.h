#ifndef EPCPLUS_UPPERTRIANGULARMATRIX_H
#define EPCPLUS_UPPERTRIANGULARMATRIX_H


#ifndef EPCPLUS_MATRIX_H
#define EPCPLUS_MATRIX_H

#include <cassert>
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class UpperTriangularMatrix{
private:
    int dim;
    int coeffSize;
    double* coeff;
    double* coeff2;
    char type;

public:
    //Constructor
    UpperTriangularMatrix(){
        dim = 0;
        coeffSize = (dim*(dim+1))/2;
        coeff = (double*) malloc(dim*dim* sizeof(double));
       // coeff2 = (double*) malloc(dim*dim* sizeof(double));
        assert(coeff != (double*) nullptr);
    }

    UpperTriangularMatrix(int d){
        dim = d;
        coeffSize = (dim*(dim+1))/2;
        coeff = (double*) malloc(coeffSize*sizeof(double));
        //    coeff2=(double*) malloc(dim*dim* sizeof(double));
        assert(coeff != (double*) nullptr);
    }

    UpperTriangularMatrix(int d, int val) {
        dim = d;
        coeffSize = (dim * (dim + 1)) / 2;
        coeff = (double *) malloc(coeffSize * sizeof(double));
        assert(coeff != (double *) nullptr);
        for (int i = 0; i < coeffSize; ++i) {
            coeff[i] = val;
        }

    }

    UpperTriangularMatrix(int d, double* co) {
        dim = d;
        coeffSize = (dim * (dim + 1)) / 2;
        coeff = (double *) malloc(coeffSize * sizeof(double));
        assert(coeff != (double *) nullptr);

        for (int i = 0; i < coeffSize; ++i) {
            coeff[i] = co[i];
        }
    }

    //copyconstructor
    UpperTriangularMatrix(const UpperTriangularMatrix& rhs){
        dim = rhs.dim;
        coeffSize = (dim*(dim+1))/2;

        coeff = (double*) malloc(coeffSize* sizeof(double));
        assert(coeff != (double*) nullptr);
        for (int i = 0; i < coeffSize; ++i) {
            coeff[i] = rhs.coeff[i];
        }

        cout << "copy constrcutor" << endl;
    }

    //zuweisugsoperator
    UpperTriangularMatrix& operator=(const UpperTriangularMatrix& rhs){
        if(this != &rhs){
            if(dim != rhs.dim){ // if needed free memory and alloc new memory
                free(coeff);
                dim = rhs.dim;
                coeff = (double*) malloc (dim*dim*sizeof (double));
            }
            for (int i = 0; i < dim*dim; ++i) {
                coeff[i] = rhs.coeff[i];
            }
        }
        return *this;
    }

    //destruktor
    ~UpperTriangularMatrix(){
        if(dim>0){
            free(coeff);
        }
        cout << "del" <<endl;
    }

    //other stuff (useful)
    int getDim();
    void setDim(int n);

    double* getCoeff() const;
    void setCoeff(double* c);

    void printMatrix() const;

    //aufgabe 11.7

    int size() const;

    const double& operator () (int j, int k) const;
    double& operator () (int j, int k);

    const UpperTriangularMatrix operator+(const UpperTriangularMatrix& x);
    //const operator+ (const UpperTriangularMatrix& x, const UpperTriangularMatrix& y);
};

#endif //EPCPLUS_MATRIX_H



#endif //EPCPLUS_UPPERTRIANGULARMATRIX_H

