#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

double* minmaxmean1(double* x, int n);
void minmaxmean2(double* x, int n, double* min, double *max, double* mean);

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

    double *min = malloc(sizeof(double)), *max = malloc(sizeof(double)), *mean = malloc(sizeof(double));

    printf("minmaxmean1 \n");

    double* arr = minmaxmean1((double *) &vec, n);
    printf("min: %f\nmax: %f\nmean: %f\n", arr[0], arr[1], arr[2]);

    printf("minmeaxmean2 \n");
    minmaxmean2((double *) &vec, n, min, max, mean);
    printf("min: %f\nmax: %f\nmean: %f \n", *min, *max, *mean);

    free(min);
    free(max);
    free(mean);
    return 0;
}


double* minmaxmean1(double* x, int n){
    double arr[3];
    double* ret = arr;

    double calc = 0;
    for(int i = 0; i < n; i++){
        calc = calc + x[n];
        if(x[i] > x[i+1]){
            arr[1] = x[i];
            arr[0] = x[i+1];
        }else{
            arr[1] = x[i+1];
            arr[0] = x[i];
        }
    }

    arr[2] = calc/(double) n;

    return ret;
}

void minmaxmean2(double* x, int n, double* min, double *max, double* mean){
    double calc = 0;
    assert(n>0);

    for(int i = 0; i < n; i++){
        calc = calc + x[n];
        if(x[i] > x[i+1]){
            *max = x[i];
            *min = x[i+1];
        }else if (x[i] < x[i+1]){
            *max = x[i+1];
            *min = x[i];
        }
       

    }

    *mean = calc/(double) n;

}

