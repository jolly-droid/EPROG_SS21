#include <stdio.h>
#include <time.h>


int maxcompare(double a[], double b[], int n);
double calcMax(double a[], double b[], int n);

int main(int argc, char* argv[]) {

    int n = 8;
    
    //init time stop
    clock_t start = 0;
    clock_t runtime = 0;
  //  clock_t previous_runtime = 0;
    
    //scan the vectors
    double v1[n];
    printf("please insert the first vector \n");
    for(int i = 0; i < n; i++){
    	scanf("%lf", &v1[i]);
    }
     printf("please insert the second vector \n");
     double v2[n];
    for(int i = 0; i < n; i++){
    	scanf("%lf", &v2[i]);
    }
    
    //calculate maxcompare
    start = clock();
    int res = maxcompare(v1, v2, n);
    runtime = (start - clock());//CLOCKS_PER_SEC;
    
    if(res == 0) printf("no, %d times\n", res);
    else printf ("yes, %d times\n", res);
    
    //measure time
    printf("estimated time %ld ms \n", runtime);

    return 0;
}

double calcMax(double a[], double b[], int n){

	double max = 0;
	
	for(int i = 0; i < n; i++){
		if(a[i] > b[i]){
			max = a[i];
		}else if ( a[i] < b[i]){
			max = b[i];
		}else{
			max = a[i];
		}
	}
return max;
}


int maxcompare(double a[], double b[], int n){
	int counter = 0;
	double max = calcMax(a, b, n);
	
	for(int i = 0; i< n; i++){
		if(a[i] == b[i] && a[i] == max){
			counter++;
			}
	}
	
	return counter;
}
