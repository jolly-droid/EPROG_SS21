#include <stdio.h>

void printTriangle (int n);
void printLine(char arr[], int length);
long factorial (int n);

int main(int argc, char* argv[]) {
   int k = 0;
   printf("Please insert k:");
   scanf("%d", &k);
   printTriangle(k);

    return 0;
}

void printTriangle(int n){
	for (int i = 0; i < n; i++){
    	for (int c = 0; c <= (n - i - 2); c++) printf(" ");
 		for (int c = 0 ; c <= i; c++) printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
 
    printf("\n");
  }
 
 // return 0;

}
long factorial(int n){ 
  long result = 1;
 
  for (int c = 1; c <= n; c++)
    result = result*c;
 
  return result;
}

/*void printTriangle(int n){
	int full = 2*n -1, wert = 4;
	char printArr[full];


	for( int i = 0; i < n; i++){
		for ( int j = 0; j < n-i; j++){
			printArr[j] = ' ';
			printf("%c", printArr[j]); 
		}
		
		for (int k = 0; k <= i; k++){
			//binomial vector
			if( i + n == n-i){
				printArr[i+n] = '1';
				printf("%d\n", i+n);
			}else{ // eins weiter aussen die zeilennummer zuordnen
				wert = i;
				printArr[i+n] = wert;
				printArr[n-i] = wert;
			}
			//printArr[n-k] = i;
			//printArr[n+k] = i;
			
			printLine(printArr, full);
		}
		
		printf("\n");
	}

}*/

void printLine(char arr[], int length){
	for(int j = 0; j < length; j++){
			printf("%c", arr[j]);
		}
	//printf("\n");
}



/*
void printTriangle (int n){
	//char space = '_';
	//char one = '1';
	
	int full = 2*n -1;
	char printArr[full];
	
	for(int i = 0; i < n ; i++){ // zeile
		printArr[i] = ' ';
		for(int j = 0; j < n; j++){ // spalte 
		
			printArr[i+n] = '1';
			printArr[n-i] = '1';
			printArr[n-j] = i;
			printArr[n+j] = i;

			printLine(printArr, full);
		}
		
	} 
}*/




/*
void printTriangle (int n){
	char space[2] = " ";
	int one = 1;
	int half = n/2;
	
	
	for(var i = 1-n ; i < n ; i++){
  
  for(var j = 1-n; j < n ; j++){
    var absi = i < 0 ? -i : i;
    var absj = j < 0 ? -j : j;
    
    if(absi == absj){
      print(n - absi);
    } else {
      print(" ");
    }
    
  }
  println();
}
	*/
	
	/* for (int j = n; j > 0 ; j--) { // lower left
                printf("%s", space);
            

            printf("%d", one);

            for (int k = half - 1; k < j; k++) { // lower right
                printf("%s", space);
                printf("%s", space);
            }
 
            printf("%d", one);
            printf("\n");

        }
        printf("\n"); */




