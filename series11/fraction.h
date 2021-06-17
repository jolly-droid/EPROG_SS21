#ifndef INCLUDE_FRACTION
#define FRACTION

#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

class fraction{
private:
    int p;
    int q;

public:
    fraction();
    fraction(int m, int n);
    ~fraction();


    fraction(const fraction& rhs);  //copyconstructor
    fraction& operator=(const fraction& rhs); //zuweisugsoperator
    fraction operator- () const;

    //typecasting
    fraction(double = 0, double = 0);
    operator double() const; // explicit!!
    operator fraction() const;

    //operatoren überladen
   // const fraction operator+(const fraction& x, const fraction& y);


    //methods
    int getP() const;
    int getQ() const;
    void setP(int n);
    void setQ(int n);

    bool isEqualTo(fraction other);
    bool isNotEqualTo(fraction other);
    bool isSmallerThan(fraction other);
    bool isSmallerThanOrEqualTo(fraction other);
    bool isLagerThanOrEqualTo(fraction other);
    bool isLagerThan(fraction other);

    fraction addFractions(fraction a, fraction b);
    int gcd(int a, int b) const;
    int lcm(int a, int b) const;

    double value();

};

#endif

