/* Write a function void cross(int n), which, for given n∈ {1,2,...,9},
 * prints a ”X”consisting of 2n−1 lines to the screen.
 * Use assertto check thatn∈{1,2,...,9}. Write a main program, which reads the parameternfrom the
 * keyboard and calls the function cross.*/
#include <assert.h>
#include <stdio.h>
void cross(int n);

int main0403(int argc, char* argv[]) {
    int n = 0, k = 0;
    printf("Please insert n:");
    scanf("%d", &n);
    assert(n < 10);
    assert(n>-1);
    cross(n);
    return 0;
}

void cross(int n) {
    int half = n;
    char space[2] = " ";

    for (int i = 1; i <= 2 * n - 1; i++) {

        if (half == i) {
            for (int j = 0; j < half; ++j) {
                printf("%s", space);
            }
            printf("%d", i);
        } else if (i < half) { // absteigend

            for (int j = 0; j < i; ++j) { // passt
                printf("%s", space);
            }
            printf("%d", i);

            for (int j = i; j < n; j++) { // passt

                printf("%s", space);
                printf("%s", space);
            }
            printf("%d", i);

        } else { // aufsteigend
            for (int j = 2*n-1-i; j > 0 ; j--) {
                printf("%s", space);
            }

            printf("%d", 2 * n - i);

            for (int k = half - 1; k < i; k++) { //passt
                printf("%s", space);
                printf("%s", space);
            }

            printf("%d", 2 * n - i);

        }
        printf("\n");
    }

}