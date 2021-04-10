/*Write a void-functiontriangle, which, given three edge-lengthsa,b,c∈R
with a,b,c≥0, determines if the resulting triangle is equilateral, scalene,
isosceles, one-dimensional degenerate (the sum of two edges equals the third one)
or impossible (the sum of two edges is smaller than the third one).
Then, write a main program which readsa,bandcfrom the keyboard and call the functiontriangle.
Save your source code astriangle.cinto the directoryserie03.*/

#include <stdio.h>
/**
 * @brief checks whether given triangle is right angeled
 * @param a side a
 * @param b side b
 * @param c side c
 */
void triangle(double a, double b, double c);
//checks whether triangle is right

/**
 * @brief checks whether triangle is valid
 * @param a
 * @param b
 * @param c
 * @return returns 1 if true, 0 otherwise
 */
int entartet(double a,double b,double c);

/**
 * @brief checks whether a + b < c
 * @param a
 * @param b
 * @param c
 * @return retruns 1 on true, 0 otherwise
 */
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


int entartet (double a, double b, double c){
    if ( (a + b) == c){return 1;}
    else if ((b + c) == a) { return 1;}
    else if ( (a+ c) == b) return 1;
    else return 0;
}

int unmogliches(double a, double b, double c){
    if ( (a + b) < c) return 1;
    else if ( (a + c ) < b) return 1;
    else if ( (b + c) < a) return 1;
    else return 0;
}