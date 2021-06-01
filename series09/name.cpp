#include "name.h"



int main(){
    string first = "Mara Zorro Klara"; // "Mara Maxine Elisabeth Sisi";
    string last = "Muster";
    string ful = "Maria Maxima Metre Muster";

    name n, full;
    n.setFirstName(first);
    n.setLastName(last);

    full.setFullName(ful);

    cout << n.getFirstName() << " " << n.getLastName() << endl;
    cout << full.getFirstName() << " " << full.getLastName() << endl;

    n.printName();

    return 0;
}


void name::setFirstName(string first){
    this->first_name = std::move(first);
}
string name::getFirstName(){
    return first_name;
}

void name::setLastName(string Last){
    this->last_name = std::move(Last);
}
string name::getLastName(){
    return last_name;
}

void name::setFullName(const string& full){
    char space = ' ';
    size_t f = full.rfind(full,space);
    //setFirstName(full.substr(f));
   // setLastName(full.substr(0,f));

    setFirstName(full.substr(0,f));
    setLastName(full.substr(f));

}

void name::printName(){
    string ret;
    char space = ' ';
    int counter = spacecounter(getFirstName());

    size_t g = getFirstName().find(space, 0);

    ret = getFirstName().substr(0,g);
    ret+= " ";
    string help = getFirstName().substr(g, getFirstName().length()); //getFirstName().length()-1
    size_t f = g;

    for (int i = 0; i < counter; i++) {
        f = help.find(space);
        help = help.substr(f+1,help.length());
        ret+= help.substr(0,1); // only one char
        ret+= ".";
    }

    ret = ret + " " + getLastName();
    cout << ret << endl;
}

int name::spacecounter(string n){
    int ret = 0;
    for (char i : n) {
        if(i == ' ') ret++;
    }
    return ret;
}
