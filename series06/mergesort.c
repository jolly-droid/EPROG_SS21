#include <stdio.h>
#include <stdlib.h>

void printArray(double* arr, int size);
void mergeSort(double* x, int n);
void swap(double *xp, double *yp);
double* merge(double* a, int m, double* b, int n);

int main(int argc, char* argv[]) {
	int n = 0;
    printf(" %s: please insert length of vector: \n", argv[0]);
    scanf("%d", &n);

    double vec[n];
    // double* v1 = vec;
    printf("insert the vector \n");
    for( int i = 0; i < n; i ++){
        vec[i] = 0;
        scanf("%lf", &vec[i]);
    }
    
    mergeSort(vec,n);
    
    printArray(vec,n);

    return 0;
}
void printArray(double* arr, int size){
    for (int i=0; i < size; i++)
        printf("%f ", arr[i]);
    printf("\n");
}


void mergeSort(double* x, int n){
	int dim1 = 1;
	int dim2 = 1;
	
	if( n >= 2){
		dim1 = (int) (n/2);
		dim2 = n-dim1;
	}
	
	if ( n == 1){
		return;
	}
	
	
	if(n == 2){
		if( x[0] > x[1]){
			swap(&x[0], &x[1]);
			
		}
		
	}else{
		
		//printf("sort n: %d\n", n);
		double* a = malloc((dim1)*sizeof(double));
		double* b = malloc((dim2)*sizeof(double));
		
		for (int i = 0; i < dim1; i++){
			a[i] = x[i];
		}
		
		for (int i = 0; i < dim2; i++){
			b[i] = x[dim1+i];
		}
		
		mergeSort(a, dim1);
		mergeSort(b, dim2);
	
	
	int counterN = 0, counterM = 0;
	
	
	for(int i = 0; i < n; i++){
	
		if (counterM == dim2){
			x[i] = b[counterN];
			counterN++;
		}else if (counterN == dim1){
			x[i] = a[counterM];
			counterM++;
		}else{
		
	
		if(a[counterM] < b[counterN]){
		
			x[i] = a[counterM] ;
			//printf("ret1: %f ", ret[i]);
			counterM++;
		}else if ( a[counterM] > b[counterN]	){
			x[i] = b[counterN] ;
			counterN++;
		}else{
			x[i] = a[counterM] ;
			x[i+1] = b[counterN] ;
			counterM++;
			counterN++;
			//i++;
		}
		}
		
	}
	}
	
}
 
 void swap(double *xp, double *yp){
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
} 




