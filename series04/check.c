
#include <stdio.h>

int check( int numberArray[], int combi[]);
int main0405(int argc, char* argv[]) {
    int numberArray[6];
    int combi[3];
   // printf("%s\n", argv[0]);

    printf("Please insert numbers: ");

    for (int i = 0; i < 6; i++){
        scanf("%d", &numberArray[i]);
    }
    printf("Please insert combination: ");

    for (int i = 0; i < 3; i++){
        scanf("%d", &combi[i]);
    }


    check(numberArray, combi);
}

int check( int numberArray[], int combi[]){

    for (int i = 0; i < 6; ++i) {
       for (int j = 0; j < 3; ++j) {
            if (numberArray[i] == combi[j]) {
                if (numberArray[i + 1] == combi[j + 1]) {
                    if (numberArray[i + 2] == combi[j + 2]) {
                        printf("combination found!");
                        return 1;
                    }
                }
            }
        }
    }
    printf("combination not found!");
    return 0;
}
/*tested with 1,2,3,4,5,6
 * and 1,2,3 jes
 * and 2,3,4 jes
 * and 6,7,8 no
 * and 2,4,5 no
 */