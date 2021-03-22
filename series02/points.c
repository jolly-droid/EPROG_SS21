/* Write a function points which, given three points (x, y), (u, v), and (a, b) inR2,
checkswhether they lie on the same line. Moreover, write a main program which reads
the six coordinates ofthe points from the
keyboard and prints out the result on the screen.
Save your source code aspoints.cinto the directoryserie02. */

// strongly inspired by:
//https://technotip.com/7151/c-program-to-check-if-three-points-are-on-one-straight-line/

#include <stdio.h>

int points (double a, double b, double x, double y, double u, double v);

int main0205(int argc, char* argv[]) {
    printf("Lets calculate the points \n");
   double a= 0, b = 0, u = 0, v = 0, x = 0, y = 0;

    printf("Enter points (a, b)\n");
    scanf("%lf%lf", &a, &b);

    printf("Enter points (u, v)\n");
    scanf("%lf%lf", &u, &v);

    printf("Enter points (x, y)\n");
    scanf("%lf%lf", &x, &y);


    points(a,b,x,y,u,v);
    return 0;
}

int points (double a, double b, double x, double y, double u, double v){
    double m = (y - b) / (x - a);
    double n = (v - y) / (u - x);

    if( m == n){
        printf("All 3 points lie on the same line\n");
    }else{
        printf("All 3 points do not lie on the same line\n");
    }
}