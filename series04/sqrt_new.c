
#include <stdio.h>
#include <assert.h>
#include <math.h>

double sqrtNew(int n, int tau);
double betrag(double number);
int main0004(int argc, char* argv[]) {
    int x = 0;
    printf("Please insert x: ");
    scanf("%d", &x);
    assert(x>0);
    int tau = 4;
    double approx = sqrtNew(x, tau);
    double root = sqrt(x);
    double err = betrag(approx-root);
    printf("the aproximation is: %lf,\n the exact value is: %lf,\n the error is: %lf", approx, root,err);
    return 0;

}


double sqrtNew(int n, int tau){

    double x1 = 0.5* (1+ n);
    double next = 0.5*(x1+ (n/x1));
    double nextnext = 0.5*(next+ (n/next));

    while((betrag(n) > tau) || ((betrag(next-nextnext))/ (betrag(next)) ) > tau){
           next = 0.5*(next + (n/next));
           nextnext = 0.5*(next+ (n/next));
    }
    return next;
}
double betrag(double number){
   return number < 0? number*(-1) : number;
}
//

