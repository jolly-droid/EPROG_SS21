#include <stdio.h>
#include <stdlib.h>
double* merge(double* a, int m, double* b, int n);

int main(int argc, char* argv[]) {

    int n = 0;
    printf("please insert length of vector 1: \n");
    scanf("%d", &n);

    double vec[n];
    printf("insert the vector 1 \n");
    for( int i = 0; i < n; i ++){
        scanf("%lf", &vec[i]);
    }
    
    int m = 0;
    printf("please insert length of vector 2: \n");
    scanf("%d", &m);

    double vec2[m];
    printf("insert the vector 2 \n");
    for( int i = 0; i < m; i ++){
       
        scanf("%lf", &vec2[i]);
    }
    
  
    double* res = merge(vec,n, vec2,m);
    
    printf("modified vector:\n ");
    for( int i = 0; i < n+m; i ++){
        printf("%f ", res[i]);

    }
    printf("\n");

    return 0;
}

double* merge(double* a, int m, double* b, int n){
	double *ret = malloc((m+n)*sizeof(double));
	int counterN = 0, counterM = 0;
	
	
	for(int i = 0; i < n+m; i++){
	
		if (counterM == m){
			ret[i] = b[counterN];
			counterN++;
		}else if (counterN == n){
			ret[i] = a[counterM];
			counterM++;
		}else{
		
	
		if(a[counterM] < b[counterN]){
		
			ret[i] = a[counterM] ;
			//printf("ret1: %f ", ret[i]);
			counterM++;
		}else if ( a[counterM] > b[counterN]	){
			ret[i] = b[counterN] ;
			counterN++;
		}else{
			ret[i] = a[counterM] ;
			ret[i+1] = b[counterN] ;
			counterM++;
			counterN++;
			//i++;
		}
		}
	
	}
	
	return ret;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 //eof
