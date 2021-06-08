#include "matrix.h"

int main(int argc, char* argv[]){
    Matrix a = Matrix();
    Matrix b = Matrix(2,'L', 8);
    Matrix c = Matrix (2, 'U', 7);

    a.scanMatrix(2);

    cout << "this is a" << endl;
    a.printMatrix();
    cout << "this is b" << endl;
    b.printMatrix();
    cout << "this is c" << endl;
    c.printMatrix();
    cout << "trace is " << a.trace() << endl;

    cout << "aufgabe 3" << endl;

    cout << "abs row sum norm is " << a.maximumAbsoluteColumnSumNorm() << endl;
    cout << "abs row column norm is " << a.maximumAbsoluteRowSumNorm() << endl;
    cout << "frobenius norm is " << a.frobeniusNorm() << endl;
    cout << "maxnorm is " << a.maxNorm() << endl;


    cout << "aufgabe 4" << endl;
    cout << "is diagonal? " << a.isDiagonal() << endl;
    cout << "is symmetric? " << a.isSymmetric() << endl;
    cout << "is skew symmetric? " << a.isSkewSymmetric() << endl;
   
    return 0;
}

//getter and setter
int Matrix::getDim(){
    return dim;
}
void Matrix::setDim(int n){
    assert(n > 0);
    dim = n;
}
double* Matrix::getCoeff(){
    return coeff;
}
void Matrix::setCoeff(double* c){
    assert(c != nullptr);
    coeff = c;
}
char Matrix::getType(){
    return type;
}
void Matrix::setType(char s){
    assert ( s == 'F' || s == 'L' || s == 'U');
    type = s;
}

//aufgabe 2
void Matrix::scanMatrix(int n){
    char s; int d; double* c = nullptr;
    setDim(n);
    cout << "matrix dimenison is " << n << endl;
    cout << "insert matrix type ";
    cin >> s;
    setType(s);

    int triangType = (dim*(dim+1))/2;
    if(s == 'F'){
        c = (double*) malloc(dim*dim * sizeof(double));
        assert(c != (double*) nullptr);
        cout << "now insert matrix " << endl;
        for (int i = 0; i < n*n; ++i) {
            cin >> d;
            c[i] = d;
        }

    }else if (s == 'U'){
        c = (double*) malloc(triangType* sizeof(double));
        assert(c != (double*) nullptr);
        cout << "now insert matrix " << endl;
        for (int i = 0; i < triangType-1; ++i) {
            cin >> d;
            c[i] = d;
        }
    }else if (s == 'L') {
        c = (double *) malloc(triangType * sizeof(double));
        assert(c != (double *) nullptr);
        cout << "now insert matrix " << endl;
        for (int i = 0; i < triangType-1; ++i) {
            cin >> d;
            c[i] = d;
        }
    }

    setCoeff(c);
}
void Matrix::printMatrix() const{

    int triangType = (dim*(dim+1))/2;
    int counter = 1;

    if(type == 'L') {
        counter = 1;
        for (int i = 0; i < triangType; i++) {
            if ((i < dim) && i == (dim - counter)) {
                for (int j = 0; j < counter; j++) cout << " " << coeff[i];
                cout << endl;
            } else if (i == (dim + counter)) { // zeilenumbruch
                for (int j = 0; j < counter; j++) cout << " " << coeff[i];
                counter++;
                cout << endl;
            } else if (i == (2* dim + counter)) { // zeilenumbruch
                for (int j = 0; j < counter; j++) cout << " " << coeff[i];
                counter++;
                cout << endl;
            }else cout << " 0";

        }

        /*
        for (int i = 0; i < triangType; i++) {
            if(i == (dim)*counter){ // zeilenumbruch
               for (int j = 0; j < counter; j++) cout << " 0";
                counter++;
                cout << endl;
            } else {
                cout << " " <<coeff[i];
            }

        }*/
    } else if (type == 'U') {
        counter = 1;
        for (int i = 0; i <= triangType; i++) {
            if ((i < dim) && i == (dim - counter)) {
                for (int j = 0; j < counter; j++) cout << " 0";
                cout << endl;
            } else if (i == (dim + counter)) { // zeilenumbruch
                for (int j = 0; j < counter; j++) cout << " 0";
                counter++;
                cout << endl;

            } else if (i == (2* dim + counter)) { // zeilenumbruch
                for (int j = 0; j < counter; j++) cout << " 0";
                counter++;
                cout << endl;
            }else cout << " " << coeff[i];

        }

    }else{ // normale matrix
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                cout << " " << coeff[j+i*dim];
            }
            cout << endl;
        }
    }
    cout << endl;

}
double Matrix::trace() const{
    double ret = 0;
    if(type == 'F') {
        for (int i = 0; i < dim; ++i) {
            ret = ret + coeff[i + i * dim];
        }
    }else{
        for (int i = 0; i < dim; ++i) {
            ret = ret + coeff2[i + i * dim];
        }
    }
    return ret;
}

//aufgabe 3
double Matrix::maximumAbsoluteColumnSumNorm() const{
    // bool maxset = false;
    double ret = 0, max = 0; // for neg numbers
    if(type == 'F') {
        for (int j = 0; j < dim; ++j) {
            ret = 0;
            for (int i = 0; i < dim; ++i) {

                ret = ret + std::abs(coeff[i * dim + j]);
            }
            if (max < ret) {
                max = ret;
            }
        }
    }else{
        for (int j = 0; j < dim; ++j) {
            ret = 0;
            for (int i = 0; i < dim; ++i) {

                ret = ret + std::abs(coeff2[i * dim + j]);
            }
            if (max < ret) {
                max = ret;
            }
        }
    }
    return max;
}
double Matrix::maximumAbsoluteRowSumNorm() const{
    // bool maxset = false;
    double ret = 0, max = 0; // for neg numbers
    if(type == 'F'){
        for (int j = 0; j < dim; ++j) {
            ret = 0;
            for (int i = 0; i < dim; ++i) {

                ret = ret + std::abs(coeff[j * dim+i]);
            }
            if(max < ret){
                max = ret;
            }
        }
    }else{
        for (int j = 0; j < dim; ++j) {
            ret = 0;
            for (int i = 0; i < dim; ++i) {

                ret = ret + std::abs(coeff2[j * dim+i]);
            }
            if(max < ret){
                max = ret;
            }
        }
    }

    return max;
}
double Matrix::frobeniusNorm() const{
    double ret = 0;
    if(type == 'F') {
        for (int i = 0; i < dim * dim; ++i) {
            ret = ret + pow(std::abs(coeff[i]), 2);
        }
    }else{
        for (int i = 0; i < dim * dim; ++i) {
            ret = ret + pow(std::abs(coeff2[i]), 2);
        }
    }
    return sqrt(ret);
}
double Matrix::maxNorm() const{
    double ret = 0, max = 0;
    if(type == 'F') {
        for (int i = 0; i < dim * dim; ++i) {
            ret = std::abs(coeff[i]);
            if (ret > max) max = ret;
        }
    }else{
        for (int i = 0; i < dim*dim; ++i) {
            ret = std::abs(coeff2[i]);
            if(ret > max) max = ret;
        }
    }
    return max;
}

//aufgabe 4
bool Matrix::isDiagonal() const{

    if(type == 'F') {
        for (int i = 0; i < dim; i++)
            for (int j = 0; j < dim; j++)
                if ((i != j) && (coeff[i + j * dim] != 0))
                    return false;
    }else{
        for (int i = 0; i < dim; i++)
            for (int j = 0; j < dim; j++)
                if ((i != j) && (coeff2[i + j * dim] != 0))
                    return false;
    }
    return true;
}
bool Matrix::isSymmetric() const{
    int counter = 0;
    if(type == 'F') {
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                if (coeff[i + j * dim] == coeff[j + dim * i]) {
                    counter++;
                }
            }
        }
    } else{
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                if (coeff2[i + j * dim] == coeff2[j + dim * i]) {
                    counter++;
                }
            }
        }
    }
    if(counter == dim) return true;
    return false;
}
bool Matrix::isSkewSymmetric() const{
    int counter = 0;
    if(type == 'F') {
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                if (coeff[i + j * dim] == (-1) * coeff[j + dim * i]) {
                    counter++;
                }
            }
        }
    }else{
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                if (coeff2[i + j * dim] == (-1) * coeff2[j + dim * i]) {
                    counter++;
                }
            }
        }
    }
    if(counter == dim) return true;
    return false;
}
