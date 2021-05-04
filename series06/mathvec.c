
#include "mathvec.h"

int main(int argc, char* argv[]) {
   int n = 5;
   
   
    printf(" start of the program \n");
    
   /* double* v1 = scanVector(n);
    double* v2 = mallocVector(n);
    
     printf("this is vector v1:\n"); 
    printVector(v1, n);
     printf("this is vector v2: \n");
    printVector(v2, n);
    
    int new = 7;
    v1 = reallocVector(v1,n,new);
    v2 = reallocVector(v2,n,new);
    
     printf("this is new vector v1:\n"); 
    printVector(v1, n);
     printf("this is new vector v2: \n");
    printVector(v2, n);
    
    freeVector(v1);
    freeVector(v2);*/
    
    int dim = 3;
    int dim2 = 3;
    
    printf("insert matrix here:\n"); 
    double* m1 = scanMatrix(dim, dim2);
    
    double* m2 = mallocMatrix(dim, dim2);
    
    printf("this is m1:\n"); 
    printMatrix(m1, dim, dim2);
    printf("this is m2:\n"); 
   	printMatrix(m1, dim, dim2);
   	

    int newdim = 4;
    int newdim2 = 4;
    
    m1 = reallocMatrix(m1, dim, dim2,newdim, newdim2); 
    m2 = reallocMatrix(m2, dim, dim2,newdim, newdim2);
    
    printf("this is m2 (reallocated):\n"); 
    printMatrix(m1, newdim, newdim2);
    printf("this is m2 (reallocated):\n"); 
   	printMatrix(m1, newdim, newdim2);
    
    freeMatrix(m1);
    freeMatrix(m2);

    return 0;
}



double* scanVector(int length) {
  int j = 0;
  double* vector = NULL;
  
  assert(length > 0); // ensure that given length is admissible
  vector = malloc(length*sizeof(double)); // allocate memory and ensure that this was successful
  assert(vector != NULL);
  

  for (j=0; j<length; ++j) {   // read coefficients from keyboard
    vector[j] = 0;
    printf("vector[%d] = ",j);
    scanf("%lf",&vector[j]);
  }
 
  return vector;  // return base pointer of dynamic vector
}


void printVector(double* vector, int length) {
  int j = 0;
 
  assert(vector != NULL); 
  assert(length > 0);

  for (j=0; j<length; ++j) {
    printf("vector[%d] = %f\n",j,vector[j]);
  }
}


double* mallocVector(int n) {
	int j = 0;
	double* vector = NULL;
	assert(n > 0);
	vector = malloc(n*sizeof(double));
	assert(vector != NULL);
	for (j=0; j<n; ++j) {
		vector[j] = 0;
	}
	return vector;
}

double* freeVector(double*vector) {
	free(vector);
	return NULL;
}



double* reallocVector(double*vector, int n, int nnew) {
	int j = 0;
	assert(vector != NULL);
	assert(n > 0);
	assert(nnew > 0);
	vector = realloc(vector,nnew*sizeof(double));
	assert(vector != NULL);
	for (j=n; j<nnew; ++j) {
		vector[j] = 0;
	}
	return vector;
}




//functions for matricies

// allocate + initialize dynamic double vector of length n
double* mallocMatrix(int n, int m){
 	return mallocVector(n*m);	
}




// allocate dynamic double vector of length n and read entries from keyboard
double* scanMatrix(int n, int m){
	return scanVector(n*m);
}



// free a dynamic vector and set the pointer to NULL
double* freeMatrix(double* matrix){
	free(matrix);
	return NULL;
}


// extend dynamic double vector and initialize new entries
double* reallocMatrix(double* matrix, int n, int m, int nnew, int mnew){
	return reallocVector(matrix, n*m, nnew*mnew);

}




// print dynamic double vector of length n,m to shell
void printMatrix(double* matrix, int n, int m){
	assert(matrix != NULL); 
	assert(n > 0);
	assert(m > 0);
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("matrix[%d][%d] = %f\n",i,j,matrix[i+j]);
			
		}
	}

}

double* matrixVectorProduct(double* matrix, int mMat, int nMat, double* vector, int nVec){
	assert(matrix != NULL); 
	assert(nMat > 0);
	assert(mMat > 0);
	assert(vector != NULL);
	assert(nVec);
	double* p = NULL;
	
	for (int i = 0; i < mMat; i++){
		for (int j = 0; j < nMat; j++){
			
			
		}
	}

	
	return p;
	}
	
double matrixNorm(double* matrix, int m, int n){
	assert(matrix != NULL); 
	assert(n > 0);
	assert(m > 0);
	

	double p = 0;
	return p;
	
	}	


double frobeniusnorm(int n, int m, double x[n][m]){

    double ret = 0, help = 0.5, help2;
/*
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            help2 = pow(x[i][j], 2);
            ret = ret + help2;
        }

    }

    ret = pow(ret, help);*/
    return ret;
}




























//EOF

