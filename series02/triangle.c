/*Write a program that reads three edge lengths a, b, c >0 from the keyboard
and prints to the screen the type of the resulting triangle: equilateral, isosceles, scalene, right-angled,
one-dimensional degenerate, i.e., the sum of two edges equals the third one, or impossible, i.e.,
the sum of two edges is strictly smaller than the third one.
Note that several properties may be satisfied simultaneously.
Save your source code as  triangle.c  into the directoyserie02. */

#include <stdio.h>
void triType(double a, double b, double c);
//checks whether trinagle is right
int pythagoras ( double a, double b, double c);
//checks whether
int entartet(double a,double b,double c);
//checks whether triangle is a valid triangle
int unmogliches (double a, double b, double c);

int main0202 (int argc, char* argv[]) {
    printf("what type of triangel do we have here?\n");
    double a= 0, b= 0, c = 0;
    printf("Please insert a:");
    scanf("%lf",&a);
    printf("Please insert b:");
    scanf("%lf",&b);
    printf("Please insert c:");
    scanf("%lf",&c);
    triType(a,b,c);
    return 0;
}

void triType( double a, double b, double c) { //xor??
    printf("Your triangle is: \n");
    if ( a<= 0 || b <= 0 || c <= 0) {
        printf("not a valid triangle!\n");}
    if ( (a == b) && (b == c)){  // gleichseitiges dreieck a == b == c
        printf("equilateral\n");
    }
    if ( (a == b) || (b==c) || (a==c)){ // gleichschenkeliges dreieck a== b || b== c || a==c
        printf("isosceles\n");
    }
    if( (a!= b) ||(b != c) ||(c != a)){ //unregelmässig seiten alle ungleoch lang
        printf("scalene\n");
    }
    if (pythagoras(a,b,c) == 1){
        printf("right angeled\n");
    }
    if ( entartet(a,b,c) == 1){
        printf("unidimesional \n");
    }

    if ( unmogliches(a,b,c) == 1){
        printf("degenerated \n");
    }


}

//rechtwinkelig - pythagoras
int pythagoras (double a, double b, double c){
    double side1 = a*a, side2 = b*b, side3 = c*c;
    if ( (side1 + side2) == side3) return 1;
    else if ( (side1 + side3) == side2) return 1;
    else if ( (side2 + side3) == side1)return 1;
    else return 0;
}

//eindimensional l ‘entartetes’ (die l ̈angste Seite des Dreiecksist
// so lang wie die Summe der beiden anderen Seiten
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