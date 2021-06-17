#include "fraction.h"


int main(int argc, char* argv[] ) {
    fraction f = fraction (5,5);
    fraction g = fraction(4,5);
    fraction h = fraction (10,5);

    cout << f << " + " << g << " = " << f+g << endl;
    cout << f << " - " << g << " = " << f-g << endl;
    cout << f << " / " << g << " = " << f*g << endl;
    cout << f << " * " << g << " = " << f/g << endl;

    cout << -f << endl;
    cout << "f is: " << f << ", g is: " << g << endl;
    if(f==g) cout<< " equal! " << endl;
    if(f!=g) cout<< "not equal!" << endl;
    if(f<=g)cout<< "smaller or equal!" << endl;
    if(f<g) cout<< "smaller!" << endl;
    if(f>=g)cout<< "greater or equal!" << endl;
    if(f>g) cout<< "greater!" << endl;

    return 0;
}
// blatt 11

fraction::fraction(int m, int n){
    assert(n != 0);
    if(n < 0){
        this->p = (-1)*m;
        this->q = (-1)*n;
    }else{
        this->p = m;
        this->q = n;
    }

}
fraction::~fraction(){
    //if( p == 0 || q == 0)
    std::cout << "fraction deleted  " << std::endl;
}


//copyconstructor
fraction::fraction(const fraction& rhs){
//    assert(q != 0);
    p = rhs.p;
    q = rhs.q;
    //cout << "copy constructor" << endl;
}

//zuweisugsoperator
fraction& fraction::operator=(const fraction& rhs){
    if(this != &rhs){
        if(p != rhs.p){
            p = rhs.p;
            q = rhs.q;
        }
    }
    return *this;
}


fraction::fraction(double p, double q){
    this->p = p;
    this-> q = q;
}

fraction::operator double() const{
   // cout << "fraction-> double" << endl;
    return (double)p/q;
}

fraction::operator fraction() const{ // fraction to fraction
    double m = 0.1;
    int count = 0, a, b;
    while(m < 1 && count < 10){
        m = m* 10;
        count++;
    }
    int z = gcd(m*count, 10*count );
    a = (m*count)/ z;
    b = (10*count) / z;

    return fraction(a,b);
}


//aufgabe 11.2
const fraction operator+ (const fraction& x, const fraction& y){
    int a, b, z;
    a = x.getP()*y.getQ() + y.getP()*x.getQ();
    b = x.lcm(x.getQ(),y.getQ());
    z = x.gcd(a,b);
    return fraction(a/z, b/z);
}
const fraction operator- (const fraction& x, const fraction& y) {
    int a, b, z;
    a = x.getP()*y.getQ() - y.getP()*x.getQ();
    b = x.lcm(x.getQ(),y.getQ());
    z = x.gcd(a,b);
    return fraction(a/z, b/z);
}
const fraction operator* (const fraction& x, const fraction& y){
    int a, b, z;
    a = x.getP() + y.getP();
    b = x.getQ() + y.getQ();
    z = x.gcd(a,b);
    return fraction(a/z, b/z);

}
const fraction operator/ (const fraction& x, const fraction& y){
    int a, b, z;
    a = x.getP() * y.getQ();
    b = x.getQ() * y.getP();
    assert(b!= 0);
    z = x.gcd(a,b);
    return fraction(a/z, b/z);
}
std::ostream& operator<<(std::ostream& output, const fraction& x){
    return output<< x.getP() << "/" << x.getQ()<< endl;
}
fraction fraction::operator- () const{
    return fraction(-1*p, q);
}

//aufgabe 11.3
const fraction operator== (const fraction& x, const fraction& y){
    //auf gleichen nenner bringen;
   /* int a1, a2, b;
    a1 = x.getP()*y.getQ();
    a2 = y.getP()*x.getQ();
    b = x.lcm(x.getQ(),y.getQ());*/
    return x.getP()*y.getQ() == y.getP()*x.getQ();
}
const fraction operator!= (const fraction& x, const fraction& y){
    return x.getP()*y.getQ() == y.getP()*x.getQ();
}
const fraction operator< (const fraction& x, const fraction& y){
    return x.getP()*y.getQ() < y.getP()*x.getQ();
}
const fraction operator<= (const fraction& x, const fraction& y){
    if(x.getP()*y.getQ() == y.getP()*x.getQ()){
        return 1;
    }else{
        if( x.getP()*y.getQ() < y.getP()*x.getQ()){
            return 1;
        }else{
            return 0;
        }
    }
}
const fraction operator> (const fraction& x, const fraction& y){
    return x.getP()*y.getQ() > y.getP()*x.getQ();
}
const fraction operator>= (const fraction& x, const fraction& y){
    if(x.getP()*y.getQ() == y.getP()*x.getQ()){
        return 1;
    }else{
        if( x.getP()*y.getQ() > y.getP()*x.getQ()){
            return 1;
        }else{
            return 0;
        }
    }
}

//aufgabe 11.5
double fraction::value(){
    return (double)p/q;
}

/*________________________blatt 9___________________*/
int fraction::getP() const{
    return p;
}
int fraction::getQ() const{
    return q;
}
void fraction::setP(int n){
    p = n;
}
void fraction::setQ(int n){
    if(n > 0){
        q = n;
    }else{
        q = n*(-1);
    }

}

//blatt 9
bool fraction::isEqualTo(fraction other){
    if(other.p == this->p) {
        if (other.q == this->q) {
            return true;
        }
    }
    return false;

}
bool fraction::isNotEqualTo(fraction other){
    if(other.p != this->p) {
        return true;
    }

    return false;

}
bool fraction::isSmallerThan(fraction other){ // checks whether this is smaller than other

    int newFR = other.q * (this->q);
    int ew1 = (this->p)*other.q;
    int ew2 = other.p* (this->q);

    if(ew1 > ew2) return true;
    else return false;

}
bool fraction::isSmallerThanOrEqualTo(fraction other){
    int newFR = other.q * (this->q);
    int ew1 = (this->p)*other.q;
    int ew2 = other.p* (this->q);

    if(ew1 >= ew2) return true;
    else return false;
}
bool fraction::isLagerThanOrEqualTo(fraction other){

    // int newFR = other.q * (this->q);
    int ew1 = (this->p)*other.q;
    int ew2 = other.p* (this->q);

    if(ew1 >= ew2) return true;
    else return false;
}
bool fraction::isLagerThan(fraction other){

    //  int newFR = other.q * (this->q);
    int ew1 = (this->p)*other.q;
    int ew2 = other.p* (this->q);

    if(ew1 < ew2) return true;
    else return false;
}
fraction fraction::addFractions(fraction a, fraction b){
    int x = a.getP() + b.getP();
    int y = a.getQ() + b.getQ();
    // cout << "x: " << x << " y: " << y << endl;
    int g = gcd (x,y);
    x = x/g;
    y = y/g;
    fraction ret = fraction(x,y);
    // ret.setP(x);
    //  ret.setQ(y);
    return ret;
}

int fraction::gcd(int a, int b) const {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int fraction::lcm(int a, int b) const {
    static int common = 0;
    common += b;  // add largest number
    if(common%a == 0) return common;  // base case
    else return lcm(a, b);  // general case
}



