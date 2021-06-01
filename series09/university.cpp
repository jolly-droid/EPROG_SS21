#include "university.h"

int main() {
    university TU;
    char st1[50] = "Technische Universität Wien";
    char city1[10] = "Wien";
    int number = 29321;
    TU.setNum(number);
    TU.setCity(city1, 10);
    TU.setName(st1,50);


    std::cout << "name = " << TU.getName() << std::endl;
    std::cout << "city = " << TU.getCity() << std::endl;
    std::cout << "number of students = " << TU.getNum() << std::endl; //29321

    TU.graduate();
    std::cout << "number of students = " << TU.getNum() << std::endl; //29320

    TU.newStudent(); //29320
    TU.newStudent(); //29320
    TU.newStudent(); //29323

    std::cout << "number of students = " << TU.getNum() << std::endl;



    return 0;
}


char* university::getName(){
    return name;
}
char* university::getCity(){
    return city;
}
int university::getNum(){
    if(num_students > 0){
        return num_students;
    }else{
        return 0;
    }
}

void university::setName(char na[], int size){
    for (int i = 0; i < size; ++i) {
        name[i] = na[i];
    }
}
void university::setCity(char na[], int size){
    for (int i = 0; i < size; ++i) {
        name[i] = na[i];
    }
}
void university::setNum(int n){
    num_students = n;
}

void university::graduate(){
    if(num_students <= 0) {
        std::cout << "nobody is studying " << std::endl;
    }else{
        setNum(getNum()-1);
    }
}
void university::newStudent(){
    num_students++;
}

