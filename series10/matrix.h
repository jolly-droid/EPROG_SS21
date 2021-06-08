
#ifndef EPCPLUS_MATRIX_H
#define EPCPLUS_MATRIX_H

#include <cassert>
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class Matrix{
private:
    int dim;
    double* coeff;
    double* coeff2;
    char type;

public:
    //Constructor
    Matrix(){
        dim = 0;
        type = 'F';
        coeff = (double*) malloc(dim*dim* sizeof(double));
        coeff2 = (double*) malloc(dim*dim* sizeof(double));
        assert(coeff != (double*) nullptr);
    }

    Matrix(int d, char t){
        dim = d;
        type = t;
        int triangType = (dim*(dim+1))/2;
        if(type == 'F'){
            coeff = (double*) malloc(dim*dim*sizeof(double));
            assert(coeff != (double*) nullptr);
        }else if (type == 'U'){
            coeff = (double*) malloc(triangType*sizeof(double));
            coeff2=(double*) malloc(dim*dim* sizeof(double));
            assert(coeff != (double*) nullptr);
        }else if (type == 'L'){
            coeff = (double*) malloc(triangType * sizeof(double));
            coeff2 = (double*) malloc(dim*dim* sizeof(double));
            assert(coeff != (double*) nullptr);
        }else{
            coeff = NULL;
        }

    }

    Matrix(int d, char t, int val){
        dim = d;
        type = t;
        int triangType = (dim*(dim+1))/2;

        if(type == 'F'){
            coeff = (double*) malloc(dim*dim * sizeof(double));
            assert(coeff != (double*) nullptr);
            for (int i = 0; i < d*d; ++i) {

                coeff[i] = val;
            }
        }else if (type == 'U'){
            coeff = (double*) malloc(triangType* sizeof(double));
            assert(coeff != (double*) nullptr);
            for (int i = 0; i < triangType; ++i) {
                coeff[i] = val;
            }

            coeff2 = (double*) malloc(dim*dim* sizeof(double));
            assert(coeff2 != (double*) nullptr);
            for (int i = 0; i < triangType; ++i) {
                if(i == i*(dim-1)){
                    coeff2[i] = 0;
                }else{
                    coeff2[i] = val;
                }

            }
        }else if (type == 'L'){
            coeff = (double*) malloc(triangType* sizeof(double));
            assert(coeff != (double*) nullptr);
            for (int i = 0; i < triangType; ++i) {
                coeff[i] = val;
            }

            coeff2 = (double*) malloc(dim*dim* sizeof(double));
            assert(coeff2 != (double*) nullptr);
            for (int i = 0; i < triangType; ++i) {
                if(i == i*(dim-1)){
                    coeff2[i] = val;
                }else{
                    coeff2[i] = 0;
                }

            }
        }else{
            coeff = nullptr;
        }
    }

    //copyconstructor
    Matrix(const Matrix& rhs){
        dim = rhs.dim;
        type = rhs.type;
        int triangType = (dim*(dim+1))/2;

        if(dim == 0){
            coeff = (double *) 0;
        }else if(type == 'F'){
            coeff = (double*) malloc(dim*dim * sizeof(double));
            assert(coeff != (double*) nullptr);
            for (int i = 0; i < dim; ++i) {
                coeff[i] = rhs.coeff[i];
            }

        }else if (type == 'U'){
            coeff = (double*) malloc(triangType* sizeof(double));
            assert(coeff != (double*) nullptr);
            for (int i = 0; i < triangType; ++i) {
                coeff[i] = rhs.coeff[i];
            }
        }else if (type == 'L'){
            coeff = (double*) malloc(triangType * sizeof(double));
            assert(coeff != (double*) nullptr);
            for (int i = 0; i < triangType; ++i) {
                coeff[i] = rhs.coeff[i];
            }
        }else{
            coeff = nullptr;
        }
        cout << "copy constrcutor" << endl;
    }

    //zuweisugsoperator
    Matrix& operator=(const Matrix& rhs){
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
    ~Matrix(){
        if(dim>0){
            free(coeff);
        }
        cout << "del" <<endl;
    }

    int getDim();
    void setDim(int n);

    double* getCoeff();
    void setCoeff(double* c);

    char getType();
    void setType(char s);

    //aufgabe 2
    void scanMatrix(int n);
    void printMatrix() const;
    double trace() const;

    //aufgabe 3
    double maximumAbsoluteColumnSumNorm() const;
    double maximumAbsoluteRowSumNorm() const;
    double frobeniusNorm() const;
    double maxNorm() const;

    //aufgabe 4
    bool isDiagonal() const;
    bool isSymmetric() const;
    bool isSkewSymmetric() const;




};

#endif //EPCPLUS_MATRIX_H

