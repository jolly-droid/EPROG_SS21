#include "uppertriangularmatrix.h"

int main(int argc, char* argv[]){
    UpperTriangularMatrix a = UpperTriangularMatrix(4);
    UpperTriangularMatrix b = UpperTriangularMatrix(4, 8);
    UpperTriangularMatrix c = UpperTriangularMatrix (4, 7);

    cout << "this is a" << endl;
    a.printMatrix();
    cout << "this is b" << endl;
    b.printMatrix();
    cout << "this is c" << endl;
    c.printMatrix();

    cout << "i,j:" << c(3,3) << endl;
    UpperTriangularMatrix d = b+c;
    cout << "b+c" << endl;



    int counter = 0;
    for (int i = 0; i < d.size(); ++i) {
        for (int j = 0; j <d.size(); ++j) {

            if (i <= j) { //&& counter ==((dim * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i))
                cout << d.getCoeff()[counter] << " "; //coeff[(dim * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i)];
            }
            else{
                cout << "0 ";
                counter++;
            }
        }
        cout << endl;
    }
    cout << endl;

    //cout << d.printMatrix() << endl;
    return 0;
}

//getter and setter
int UpperTriangularMatrix::getDim(){
    return dim;
}
void UpperTriangularMatrix::setDim(int n){
    assert(n > 0);
    dim = n;
}
double* UpperTriangularMatrix::getCoeff() const{
    return coeff;
}
void UpperTriangularMatrix::setCoeff(double* c){
    assert(c != nullptr);
    coeff = c;
}


//aufgabe 11.7

int UpperTriangularMatrix::size() const{
    return dim;
}

void UpperTriangularMatrix::printMatrix() const{
    int counter = 0;
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {

            if (i <= j) { //&& counter ==((dim * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i))
                cout << coeff[counter] << " "; //coeff[(dim * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i)];
            }
            else{
                cout << "0 ";
                counter++;
            }
        }
        cout << endl;
    }
    cout << endl;

}


const double& UpperTriangularMatrix::operator () (int j, int k) const{
    assert(j >= 0);
    assert(k <= dim-1);
   return coeff[(dim*(j-1)-(j-2)*(j-1)/2 )+ (k-j)];
}

double& UpperTriangularMatrix::operator() (int j, int k){
    assert(j >= 0);
    assert(k <= dim-1);
    return coeff[(dim*(j-1)-(j-2)*(j-1)/2 )+ (k-j)];

}

//aufgabe 11.8
// const fraction operator+ (const fraction& x, const fraction& y){
const UpperTriangularMatrix operator+(const UpperTriangularMatrix& x, const UpperTriangularMatrix& y){
    assert(x.size() == y.size());
    int coSize = (x.size()* (y.size() + 1)) / 2;
    double * help = (double *) malloc(coSize* sizeof(double));;
    for (int i = 0; i < x.size(); ++i) {
        help[i] = x.getCoeff()[i] + y.getCoeff()[i];
    }

    return UpperTriangularMatrix(x.size(), help);
}

const UpperTriangularMatrix UpperTriangularMatrix::operator+(const UpperTriangularMatrix& x){
    assert(x.size() == this->size());
    int coSize = (x.size()* (x.size() + 1)) / 2;
    double * help = (double *) malloc(coSize* sizeof(double));;
    for (int i = 0; i < x.size(); ++i) {
        help[i] = x.getCoeff()[i] + this->coeff[i];
    }
    return UpperTriangularMatrix(x.size(), help);
}
