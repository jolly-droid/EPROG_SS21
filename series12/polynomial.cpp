#include "polynomial.h"

int main(int argc, char* argv[]){
/*
    double coeff[3] = {2,3,4};
    polynomial p(3, coeff);

    for (int i = 0; i < p.getDegree(); ++i) {
        cout << p[i];
    }

    cout << endl;*/
    return  0;
}

polynomial::~polynomial() {

}


int polynomial::getDegree() const {
    return degree;
}

polynomial::polynomial(int deg){
    degree = deg;
}

polynomial::polynomial(int deg, double* co){
    degree = deg;
    coeff = co;
}

void polynomial::setDegree(int degree) {
    polynomial::degree = degree;
}

polynomial::polynomial(const polynomial &rhs) {
    degree = rhs.degree;
    coeff = (double*) malloc(degree* sizeof(double));
    assert(coeff != (double*) nullptr);

    for (int i = 0; i < degree; ++i) {
        coeff[i] = rhs.coeff[i];
    }

}

polynomial &polynomial::operator=(const polynomial &rhs) {
    if(this != &rhs){
        if(degree!= rhs.degree){ // if needed free memory and alloc new memory
            free(coeff);
            degree = rhs.degree;
            coeff = (double*) malloc (degree*sizeof (double));
        }
        for (int i = 0; i < degree; ++i) {
            coeff[i] = rhs.coeff[i];
        }
    }
    return *this;
}

polynomial &polynomial::operator<<(const polynomial &rhs) {
    string res = "";
    for (int i = 0; i < degree; ++i) {
        res = res;
        cout << coeff[i];
    }
    cout << endl;
}

double& polynomial::operator[](int index) {
    assert(index >= 0);
    return coeff[index];
}





