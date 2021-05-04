#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

double* cut (double* x, int n, double cmin, double cmax);
double* reallocVector(double*vector, int n, int nnew);

int main(int argc, char* argv[]) {

    int n = 0;
    printf("please insert length of vector: \n");
    scanf("%d", &n);

    double vec[n];
    // double* v1 = vec;
    printf("insert the vector \n");
    for( int i = 0; i < n; i ++){
        vec[i] = 0;
        scanf("%lf", &vec[i]);
    }

    int cmin = 0;
    printf("please insert cmin: \n");
    scanf("%d", &cmin);

    int cmax = 0;
    printf("please insert cmax: \n");
    scanf("%d", &cmax);


    printf("original vector:\n ");
    for( int i = 0; i < n; i ++){
            printf("%f ", vec[i]);
    }
    printf("\n");
    double* vecNew = cut(vec, n, cmin, cmax);

    printf("modified vector:\n ");
    for( int i = 0; i < n; i ++){
        printf("%f ", vecNew[i]);

    }
    printf("\n");

    return 0;
}

double* cut (double* x, int n, double cmin, double cmax){

    int counter = 0;

    for(int i = 0; i < n; i++){
        if(x[i] < cmin){
            counter++;
        }else if(x[i] > cmax){
            counter++;
        }
    }

    double *ret = malloc(counter*sizeof(double));

    int j = 0;
    for(int i = 0; i < n; i++){

        if(x[i] >= cmin && x[i] <= cmax) {
            ret[j] = x[i];
            j++;
        }

    }
    return ret;

}


