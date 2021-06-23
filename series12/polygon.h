#ifndef EPCPLUS_POLYGON_H

#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;


class Polygon {
private:
    vector <double> nodesx;
    vector <double> nodesy;
public:
    Polygon();
    double getLength();
    void setNodes(const vector <double>& nodesx, const vector <double>& nodesy);
    const vector <double>& getNodesx();
    const vector <double>& getNodesy();
};


//class rectangle
class Rectangle: public Polygon{
public:
    double getArea();
    void setNodes(const vector <double>& nodesx, const vector <double>& nodesy);
};

//class triangle

class Triangle: public Polygon{
public:
    double getArea();
    void setNodes(const vector <double>& nodesx, const vector <double>& nodesy);
};




#define EPCPLUS_POLYGON_H

#endif //EPCPLUS_POLYGON_H

