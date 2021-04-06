/*
 * The Fibonacci sequence is recursively defined byx0:= 0,x1:= 1, and
 * xn+1:=xn+xn−1.Write the function fibonacci which returns x n for given n.
 * Then, write a main program, which reads n from the keyboard and prints
 * the corresponding number xn.
 */

#include <stdio.h>

int fibbonacci(int n);

int main(int argc, char* argv[]) {
    int a = 0;
    printf("Let's calculate the fibbonaci numbers \n");
    printf("Please insert n:");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Cannot be calculated");
        return -1;
    } else {
        for(int i = 1;i<a;i++) {
            printf("%d, ",fibbonacci(i));
        }

    }
    return 0;
}

//recursive version
int fibbonacci2(int n) {
    if(n == 0){
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return (fibbonacci(n-1) + fibbonacci(n-2));
    }
}

//non recursive version not working
int fibbonacci(int n) {
    int help = 0, help2 = 3, help3 = 1;
    if(n == 0){
        return 1;
    } else if(n == 1) {
        return 3;
    } else {

        for(int i = 0; i < n; i++){
            help = 3* help2 - help3;
            help3 = help2;
            help2 = help;

        }
        return help;

    }
}
