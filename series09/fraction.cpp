#include "fraction.h"
using std::cout;
using std::endl;

int main() {
    fraction f, g, h;
    f.setP(4);
    f.setQ(5);

    g.setP(5);
    g.setQ(5);

    h.setP(10);
    h.setQ(5);

    cout << "ex 05" << endl;
    cout << "fraction:  " << f.getP()  << "/" <<  f.getQ()<< endl;
    cout << "fraction:  " << g.getP()  << "/" <<  g.getQ()<< endl;
    cout << "fraction:  " << h.getP()  << "/" <<  h.getQ()<< endl;
/*
    cout << "ex 06" << endl;
    cout << "f is equal to g: " << f.isEqualTo(g)<< endl;
    cout << "f is not equal to g: " << f.isNotEqualTo(g)<< endl;
    cout << "f is smaller than g: " << f.isSmallerThan(g)<< endl;
    cout << "f is smaller than or equal to g: " << f.isSmallerThanorEqualTo(g)<< endl;
    cout << "g is lager than h: " << g.isLagerThan(h)<< endl;
    cout << "g is larger than or equal to h: " << g.isLagerThanOrEqualTo(h)<< endl;
*/
    cout << "ex 07" << endl;
    fraction j = g.addFractions(g,h);
    cout << "fraction:  " << j.getP()  << "/" <<  j.getQ()<< endl;

    return 0;
}

int fraction::getP(){
  return p;
}
int fraction::getQ(){
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
bool fraction::isSmallerThanorEqualTo(fraction other){
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

int fraction::gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
