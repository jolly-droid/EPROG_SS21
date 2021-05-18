#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

typedef struct poly{
    int degree;
    double* coeff;

}polynomial;

polynomial* newPoly(int n, double* coeffs);
polynomial* delPoly(polynomial* p);
int getPolyDegree(polynomial* p);
double getPolyCoefficient(polynomial* p, int index);
polynomial* setPolyCoefficient(polynomial* p, double newcoeff, int index);
void printPoly(polynomial* p);

polynomial* addPolynomials(polynomial* a, polynomial* b);
polynomial* differentiatePolynomial(polynomial* c, int k);



int main(int argc, char* argv[]) {
    double a[] = {1,2,3,4}; // 4*x^3 + 3*x² + 2*x + 1
    
    printf("this is the polynomial p1: ");
    polynomial* p1 = newPoly(4, a);
    printPoly(p1);
    
    printf("this is p1(new coefficient): ");
    p1 = setPolyCoefficient(p1, 5, 3);
    printPoly(p1);
    
    printf("this is the coefficient: %lf\n", getPolyCoefficient(p1, 3));
    
    double b[] = {1,1,1,1}; // x^3 + 3*x² + 2*x + 1
    polynomial* p2 = newPoly(4, b);
    printf("this is the polynomial p2: ");
    printPoly(p2);
    
    //aufgabe 4
    printf("\nAufgabe 4 - addPoly\n");
    polynomial* p = addPolynomials(p1,p2);
    printPoly(p);

    printf("\nAufgabe 5 - differentiate\n");
    int k = 1;
    p = differentiatePolynomial(p,k);
    printPoly(p);

    delPoly(p1);
    delPoly(p2);
    return 0;
}

polynomial* newPoly(int n, double* coeffs){
    assert(n>= 0);
    polynomial* ret = malloc(sizeof(polynomial));
    ret->degree = n;
    ret->coeff = malloc(n*sizeof(double));
    ret->coeff = coeffs;
    return ret;
}
polynomial* delPoly(polynomial* p){
    assert(p != NULL);
    free(p);
    return NULL;
}
int getPolyDegree(polynomial* p){
    return p->degree;
}
double getPolyCoefficient(polynomial* p, int index){
    return p->coeff[index];
}
polynomial* setPolyCoefficient(polynomial* p, double newcoeff, int index){
    assert(p != NULL);
    assert(newcoeff != 0);

    p->coeff[index] = newcoeff;
    printf("%lf", p->coeff[index]);
    return p;
}
void printPoly(polynomial* p){
    assert(p != NULL);
    for (int i = p->degree-1; i > -1; i--) {
    	
        	if(i == 0) printf("%lf", p->coeff[0]);
        	else printf("%lf*x^%d + ", p->coeff[i], i);
        
    }
    printf("\n");

}

//aufgabe 4
polynomial* addPolynomials(polynomial* a, polynomial* b){
    int n = 0, j = 0, k = 0;
    if(getPolyDegree(a) >= getPolyDegree(b)){
        n = getPolyDegree(a);
    }else{
        n = getPolyDegree(b);
    }
    double* c = malloc(n*sizeof(double));
    for(int i = 0; i < n; i++){
        if(j < a->degree){
            c[i] = c[i] + a->coeff[j];
            j++;
        }
        if (k < b->degree){
            c[i] = c[i] + b->coeff[k];
            k++;
        }
    }
    return newPoly(n, c);
}

//aufgabe 5
polynomial* differentiatePolynomial(polynomial* c, int k){
    int n = c->degree;
    double* new = malloc((n-1)*sizeof(double));
    double* old = c->coeff;
    int j = 1;
    for(int i = 0; i < n; i++){
        if(i+1 == n){
            break;
        }else{
            new[i] = j * old[i + 1]; 
            j++;
            
        }
    }
    return newPoly(n-1, new);
}










