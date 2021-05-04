#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define MAXSIZE 30

int anagram (char* firstStr, char* secondStr);
void sort (char* str, int n);
void swa(char *xp, char *yp);

int main(int argc, char* argv[]) {

    int n = MAXSIZE;

     char vec[n];
     printf("%s: insert the first word: ", argv[0]);
     scanf("%s", &vec);
     printf("\n");
     char vec2[n];
     printf("%s: insert the second word: ", argv[0]);
     scanf("%s", &vec2);
     printf("\n");


    //calculate ...
    int ret = anagram(vec, vec2);

    //print the results
    if(ret == 0){
        printf("No, they are not anagrams!\n");
    }else{
        printf("Yes, they are anagrams!\n");
    }

    return 0;
}


int anagram (char* firstStr, char* secondStr){
    size_t s1 = strlen(firstStr);
    size_t s2 = strlen(secondStr);
    if(s1 == s2) {
       
        sort(firstStr, (int) s1);
        sort(secondStr,(int) s2);

        return !strcasecmp(firstStr,secondStr);

    }else{
        return 0; // not the same length - skip
    }

}

void sort(char* x, int n){
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-j-1; i++){
            if(x[i] > x[i+1]){
                swa(&x[i], &x[i+1]);
            }
        }
    }

}



void swa(char *xp, char *yp){
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}


//eof
