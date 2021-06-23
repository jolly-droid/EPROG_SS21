#include "polygon.h"

int main(int argc, char* argv[]){
    vector <double>  nodesx(4);
    vector <double>  nodesy(4);
    nodesx[0] = 0; nodesx[1] = 1; nodesx[2] = 1; nodesx[3] = 0;
    nodesy[0] = 0; nodesy[1] = 0; nodesy[2] = 1; nodesy[3] = 1;

    vector <double>  nodestx(3);
    vector <double>  nodesty(3);
    nodestx[0] = 1; nodestx[1] = 3; nodestx[2] = 5;
    nodesty[0] = 1; nodesty[1] = 2; nodesty[2] = 1;

    //define polygon
    Polygon p;
    p.setNodes(nodesx, nodesy);

    Rectangle a;

    a.setNodes(nodesx,nodesy);
    cout << "area of rect is " << a.getArea() << std::endl;

    Triangle b;
    b.setNodes(nodestx,nodesty);
    cout << "area of rect is " << b.getArea() << std::endl;

}




Polygon::Polygon() {
    //this->nodesx = nullptr;
  //  this->nodesy = nodesy;
}
double Polygon::getLength() {
    double tmp = 0;

    for(int i=0;i<nodesx.size()-1;++i){
        double lx = nodesx[i+1]-nodesx[i];
        double ly = nodesy[i+1]-nodesy[i];
        tmp += sqrt(lx*lx+ly*ly);}
    int i = nodesx.size()-1;
    double lx = nodesx[0]-nodesx[i];
    double ly = nodesy[0]-nodesy[i];
    tmp += sqrt(lx*lx+ly*ly);
    return tmp;}
void  Polygon::setNodes(const vector <double>& nodesx, const vector <double>& nodesy){
    this->nodesx = nodesx;
    this->nodesy = nodesy;
}
const vector <double>&  Polygon::getNodesx(){return nodesx;}
const vector <double>&  Polygon::getNodesy(){return nodesy;}








//class rectangle

double Rectangle::getArea(){
    const vector <double>& nodesx = getNodesx();
    const vector <double>& nodesy = getNodesy();
    double l1x = nodesx[1]-nodesx[0];
    double l1y = nodesy[1]-nodesy[0];
    double l2x = nodesx[2]-nodesx[1];
    double l2y = nodesy[2]-nodesy[1];
    return sqrt(l1x*l1x+l1y*l1y)*sqrt(l2x*l2x+l2y*l2y);
}

void Rectangle::setNodes(const vector<double> &nodesx, const vector<double> &nodesy) {
    assert(nodesy.size() == 4 && nodesx.size() == 4);
    Polygon::setNodes(nodesx, nodesy);
}



//class traingle
double Triangle::getArea() {
    const vector <double>& nodesx = getNodesx();
    const vector <double>& nodesy = getNodesy();
    double side1 = nodesx[1]-nodesx[0];
    double side2 = nodesy[1]-nodesy[0];
    double side3 = nodesx[0]-nodesx[1];
    double s = (side1 + side2 + side3 )/2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));


}

void Triangle::setNodes(const vector<double> &nodesx, const vector<double> &nodesy) {
    double side1 = nodesx[1]-nodesx[0];
    double side2 = nodesy[1]-nodesy[0];
    double side3 = nodesx[0]-nodesy[1];
    assert(nodesy.size() == 3 && nodesx.size() == 3);
    assert(side1 + side2 <= side3 || side1 + side3 <= side2 || side3 + side2 <= side1);
    Polygon::setNodes(nodesx, nodesy);
}




