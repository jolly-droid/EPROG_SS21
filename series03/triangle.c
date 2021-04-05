/*Write a void-functiontriangle, which, given three edge-lengthsa,b,c∈R
with a,b,c≥0, determines if the resulting triangle is equilateral, scalene,
isosceles, one-dimensional degenerate (the sum of two edges equals the third one)
or impossible (the sum of two edges is smaller than the third one).
Then, write a main program which readsa,bandcfrom the keyboard and call the functiontriangle.
Save your source code astriangle.cinto the directoryserie03.*/

#include <stdio.h>
void triangle(double a, double b, double c);
//checks whether triangle is right

int entartet(double a,double b,double c);
//checks whether triangle is a valid triangle
int unmogliches (double a, double b, double c);

int main0301 (int argc, char* argv[]) {
    printf("what type of triangel do we have here?\n");
    double a= 0, b= 0, c = 0;
    printf("Please insert a:");
    scanf("%lf",&a);
    printf("Please insert b:");
    scanf("%lf",&b);
    printf("Please insert c:");
    scanf("%lf",&c);
    printf("Your triangle is: \n");
    triangle(a,b,c);
    return 0;
}
void triangle(double a, double b, double c) {
    printf("Your triangle is: \n");
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("not a valid triangle!\n");
    }
    if ((a == b) && (b == c)) {  // gleichseitiges dreieck a == b == c
        printf("equilateral\n");
    }
    if ((a == b) || (b == c) || (a == c)) { // gleichschenkeliges dreieck a== b || b== c || a==c
        printf("isosceles\n");
    }
    if ((a != b) || (b != c) || (c != a)) { //unregelmässig seiten alle ungleoch lang
        printf("scalene\n");
    }

    if (entartet(a, b, c) == 1) {
        printf("unidimesional \n");
    }

    if (unmogliches(a, b, c) == 1) {
        printf("degenerated \n");
    }

}


//eindimensional entartetes (die l angste Seite des Dreiecks ist so lang wie die Summe der beiden anderen Seiten
int entartet (double a, double b, double c){
    if ( (a + b) == c){return 1;}
    else if ((b + c) == a) { return 1;}
    else if ( (a+ c) == b) return 1;
    else return 0;
}
//unmögliches dreieck a + b < c abfrage nach längster seite ‘unm ̈ogliches’
// (die l ̈angste Seite desDreiecks ist l ̈anger als die Summe der beiden anderen Seiten)

int unmogliches(double a, double b, double c){
    if ( (a + b) < c) return 1;
    else if ( (a + c ) < b) return 1;
    else if ( (b + c) < a) return 1;
    else return 0;
}