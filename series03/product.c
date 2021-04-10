/* Write a function int product(int x, int y),
 * which computes and returns the result of the product x∗y of two given natural numbers x and y.
 * Only the arithmetic operations + and - can be used by the function.
 * Moreover, write a main program which reads x and y from the keyboard and prints the resultx∗yto the screen.
 * Hint:Set up an appropriatewhileloop.
 */

#include <stdio.h>
/**
 * @brief calculates the product of to numbers, using only addition
 * @param x first factor
 * @param y second factor
 * @return solution of x*y
 */
int product(int x, int y);

int main0305(int argc, char* argv[]) {
    int x = 0, y = 0;
    printf("Please insert x:");
    scanf("%d", &x);
    printf("Please insert y:");
    scanf("%d", &y);
    int pro = product(x,y);
    printf("the product is %d", pro);
    return 0;
}

int product(int x, int y){
    int ret = 0;
    for (int i = 0; i < y; i++){
        ret = ret + x;
    }
    return ret;
}