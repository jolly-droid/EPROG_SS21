#include <iostream>
#include <cassert>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#ifndef EPCPLUS_POLYNOMIAL_H

class polynomial{
private:
    int degree;
    double* coeff;
public:
    polynomial(int degree);
    polynomial(int deg, double* co);
    polynomial(const polynomial& rhs);
    polynomial& operator=(const polynomial& rhs);
    //polynomial& operator[](const polynomial& rhs);
    double& operator [] (int index);

    polynomial& operator<<(const polynomial& rhs);
    virtual ~polynomial();

    int getDegree() const;
    void setDegree(int degree);

};

#define EPCPLUS_POLYNOMIAL_H

#endif //EPCPLUS_POLYNOMIAL_H

