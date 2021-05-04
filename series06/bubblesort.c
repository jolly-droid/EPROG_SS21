#include <stdio.h>
#include <stdlib.h>

void bubbleSort(double* x, int n);
void swap(double *xp, double *yp);
void printArray(double* arr, int size);


int main(int argc, char* argv[]) {
	int n = 0;
    printf("%s: please insert length of vector: \n", argv[0]);
    scanf("%d", &n);

    double vec[n];
    // double* v1 = vec;
    printf("insert the vector \n");
    for( int i = 0; i < n; i ++){
        vec[i] = 0;
        scanf("%lf", &vec[i]);
    }
    
    bubbleSort(vec,n);
    
    printArray(vec,n);

    return 0;
}

void bubbleSort(double* x, int n){
	//double help1, help2;
	for(int j = 0; j < n-1; j++){
		for(int i = 0; i < n-j-1; i++){
			if(x[i] > x[i+1]){
				swap(&x[i], &x[i+1]);
			}
		}
	}
	
}

void swap(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  

void printArray(double* arr, int size){
    for (int i=0; i < size; i++)
        printf("%f ", arr[i]);
    printf("\n");
}
  

/*void trippleswap(double *xp, double *yp, double* zp)
{
    double temp = *xp;
    double temp2 = *yp;
    *xp = temp2;
    *yp = *zp;
    *zp = temp;
}*/







//eof
