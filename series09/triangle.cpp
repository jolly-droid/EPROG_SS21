#include "triangle.h"
using std::cout;
using std::endl;

int main() {
    Triangle tri;
    tri.setX(0.0,0.0);
    tri.setY(1.0,0.0);
    tri.setZ(0.0,1.0);
    cout << "area = " << tri.getArea() << endl;
    cout << "perimeter = " << tri.getPerimeter() << endl;
    cout << "equilateral = " << tri.isEquilateral() << endl;
    return 0;
}



void Triangle::setX(double x0, double x1) {
    x[0] = x0;
    x[1] = x1;
}

void Triangle::setY(double y0, double y1) {
    y[0] = y0;
    y[1] = y1;
}
void Triangle::setZ(double z0, double z1) {
    z[0] = z0;
    z[1] = z1;
}

double Triangle::getArea() {
// use the 2x2 determinant formula to compute the area
    return 0.5*fabs( (y[0]-x[0])*(z[1]-x[1])- (z[0]-x[0])*(y[1]-x[1]) );
}

double Triangle::getPerimeter(){
    double a[2];
    double b[2];
    double c[2];

    double as, bs, cs;

    a[0] = y[0] - x[0];
    a[1] = y[1] - x[1];

    b[0] = z[0] - y [0];
    b[1] = z[1] - y [1];

    c[0] = z[0] - x[0];
    c[1] = z[1] - x[1];

    as = sqrt(pow(a[0], 2) + pow(a[1], 2) );
    bs = sqrt(pow(b[0], 2) + pow(b[1], 2) );
    cs = sqrt(pow(c[0], 2) + pow(c[1], 2) );

    return as + bs +cs;

}

bool Triangle::isEquilateral(){
    double a[2];
    double b[2];
    double c[2];

    double as, bs, cs;

    a[0] = y[0] - x[0];
    a[1] = y[1] - x[1];

    b[0] = z[0] - y [0];
    b[1] = z[1] - y [1];

    c[0] = z[0] - x[0];
    c[1] = z[1] - x[1];

    as = sqrt(pow(a[0], 2) + pow(a[1], 2) );
    bs = sqrt(pow(b[0], 2) + pow(b[1], 2) );
    cs = sqrt(pow(c[0], 2) + pow(c[1], 2) );

    if(as == bs){
        if(bs == cs){
            return true;
        }
    }

    return false;

}



