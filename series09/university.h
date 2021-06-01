#ifndef INCLUDE_UNIVERSITY
#define UNIVERISTY
#define maxnum 80
#define maxcity 20
#include <cmath>
#include <iostream>

class university {
private:
    char name[maxnum];
    char city[maxnum];
    int num_students;



public:
    char* getName();
    char* getCity();
    int getNum();

    void setName(char na[maxnum], int size);
    void setCity(char na[maxcity], int size);
    void setNum(int n);

    void graduate();
    void newStudent();


};

#endif
