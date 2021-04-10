/*
 * Write a recursive void-function "papercut", which visualizes all the possibilities for
 * cutting a sheet  of  paper  of  integer  length n into  thin  strips  of  length  1  and  2.
 * Specifically,  given  a  natural number n, the function should determine all the possible
 * representations of n of the form n=∑kj=1σj with σj∈ {1,2}.
 * Here, the ordering of the sequence is important.
 * For instance, for n= 4, there are 5 possibilities, namely
 * 4 = 2 + 2
 * 4 = 2 + 1 + 1
 * 4 = 1 + 2 + 1
 * 4 = 1 + 1 + 2
 * 4 = 1 + 1 + 1 + 1
 * Devise  a  suitable  signature  for  your  function (which  contains  at  least n∈N as  input  parameter).
 * Moreover, write a main program in which n is defined as a constant and which prints
 * to the screen all the possibilities.

 */


#include <stdio.h>
#include <string.h>

int number(int);
void papercut3(int start, int counter1, int n);

int main(int argc, char* argv[]){
    int n = 0;
    printf("Insert integer: \n");
    scanf("%d",&n);
    printf("\n");
    if ( n <= 0){
        printf("Cannot be calculated\n");
        return -1;
    }else {
        papercut3(n, 0, n);
        return 0;
    }
}

void papercut3(int start, int counter, int n){
    if(n == start && counter < number(start)) { //abbruchbedingung
        printf("%d = ",n);
    }
    if(counter<number(n-2)){
        printf("2");
        if(n-2>0){
            printf(" + ");
            papercut3(start,counter,n-2);
        }
    }else{  //falls 2 nicht geht muss anzahl 1 sein,
        printf("1");
        if(n-1>0){
            printf(" + ");
            papercut3(start,counter-number(n-2),n-1);
        }
    }
    counter += 1;
    if(n == start && counter <number(start)){
        printf("\n");
        papercut3(start,counter,n);
    }
}

int number(int n) {
    int x_n2 = 0,x_n1 = 1,x_n = 0;
    if(n==-1){
        return -1;
    }else if(n == 0){
        return 1;
    }

    for(int i=0;i<n;i++){
        x_n = x_n2+x_n1;
        x_n2=x_n1;
        x_n1=x_n;
    }
    return x_n;
}

void papercut(char* string, int n);
void papercut2(int print, int n);

/*
int main(int argc, char* argv[]) {
    int n = 0;
    printf("Please insert the size of how often you want to cut: \n");
    scanf("%d",&n);
    if ( n <= 0){
        printf("Cannot be calculated\n");
        return -1;
    }else {
      //  printf("%d = ", n);
       // char string[2] = "\0";
       // papercut(string, n);

        printf("%d = ", n);
        papercut2(0, n);
    return 0;}

}

void papercut(char string[], int n) {
    if (n <= 0) {
        strcat(string, "\n");
        if (n == 0) {

            printf("%s", string);
        }
    } else {
        // for (int i = 0; i < n; ++i) {
           //  printf("%s hh", string);
        // }

        papercut(strcat(string, "+1 "), n - 1);
        papercut(strcat(string, "+2 "), n - 2);
        //papercut(print*10+1,n-1);
        //papercut(print*10+2,n-2);
    }
}

   //working
    void papercut2(int print, int n){
        //printf("+");
        if (n <= 0) {
            if(n == 0){
                printf("%d\n", print);
            }
        }else{
            //printf("2");
            //  papercut(print+1,n-1);
            //papercut(print+2,n-2);
            papercut(print*10+1,n-1);
            papercut(print*10+2,n-2);
        }

    }*/


