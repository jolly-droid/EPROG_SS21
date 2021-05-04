#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int roman2int(char* str);
char* int2roman(int num);

int main(int argc, char* argv[]) {

   	int number = 5600;
    
    char* y = int2roman(number);
    
    printf("the romans would have written: %s\n", y);
    
    int x = roman2int(y);
    
    printf("but we write: %d\n", x);
    

    return 0;
}


char* int2roman(int num){
	char* r = malloc(num*sizeof(char));
    int counter = 0;

    while(num != 0){

        if (num >= 1000){       // 1000 - m
           r[counter] = 'M';
           num -= 1000;
           counter++;
        }else if (num >= 900){   // 900 -  cm
           r[counter] = 'C';
           r[counter+1] = 'M';
           num -= 900;
           counter = counter +2;
        }else if (num >= 500){   // 500 - d
           r[counter] = 'D';
           num -= 500;
           counter++;
        }else if (num >= 400){   // 400 -  cd
           r[counter] = 'C';
           r[counter+1] = 'D';
           num -= 400;
           counter = counter +2;
        }else if (num >= 100){  // 100 - c
           r[counter] = 'C';
           num -= 100; 
           counter++; 
        }else if (num >= 90) {   // 90 - xc
        	r[counter] = 'X';
           r[counter+1] = 'C';
           num -= 90; 
           counter = counter +2;                                             
        }else if (num >= 50) {   // 50 - l
       	   r[counter] = 'L';
           num -= 50; 
           counter++;                                                                    
        }else if (num >= 40){    // 40 - xl
           r[counter] = 'X';
           r[counter] = 'L';          
           num -= 40;
           counter= counter +2;
        }else if (num >= 10){   // 10 - x
           r[counter] = 'X';
           num -= 10;  
           counter++;         
        }else if (num >= 9){     // 9 - ix
           r[counter] = 'I';
           r[counter] = 'X';
           num -= 9;   
           counter= counter + 2;                      
        }else if (num >= 5){    // 5 - v
           r[counter] = 'V';
           num -= 5; 
           counter++;                                    
        } else if (num >= 4) {    // 4 - iv
           r[counter] = 'V';
           r[counter] = 'I';
           num -= 4; 
           counter = counter +2;                                                           
        }else if (num >= 1)  {   // 1 - i
           r[counter] = 'I';
           num -= 1;
           counter++;                                                                                   
        }

    }//eo while
	
	return r;
}

int roman2int(char* str){
int mCount = 0, cCount = 0, xCount = 0, iCount = 0, lCount = 0, dCount = 0, vCount = 0;
int n = strlen(str);

	for (int i = 0; i < n; i++){
		if (str[i] == 'M') mCount++;
		else if ( str[i] == 'D') dCount++;
		else if ( str[i] == 'C') cCount++;
		else if ( str[i] == 'L') lCount++;
		else if ( str[i] == 'X') xCount++;
		else if ( str[i] == 'V') vCount++;
		else if ( str[i] == 'I') iCount++;
		else{
			printf("error");
			return -1;
			
		}
	}
	
	return mCount*1000+ dCount*500 + cCount*100 + lCount*50 + xCount*10 + vCount*5 + iCount;

}
