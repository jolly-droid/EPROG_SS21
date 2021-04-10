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
void papercut(int print, int n);

int main(int argc, char* argv[]) {
    int n = 0;
    printf("Please insert the size of how often you want to cut: \n");
    scanf("%d",&n);
    if ( n <= 0){
        printf("Cannot be calculated\n");
        return -1;
    }else {
        printf("%d = ", n);
        papercut(0, n);
    }

}

void papercut(int print, int n){
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

}
