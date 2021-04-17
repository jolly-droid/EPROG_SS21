
#include <stdio.h>

int kgv( int n, int p);
int main(int argc, char* argv[]) {
    int n = 0, p = 0, max;
    printf("please insert a:");
    scanf("%d", &n);
    printf("please insert b:");
    scanf("%d", &p);

    if(n<0||p<0) {
        return -1;
    }else {

        int res = kgv(n,p);
        printf("reslut is: %d", res);
        return 0;
    }
}
int kgv(int n, int p){
    double re = n*p;
    int help =0;
    for (int i = 1; i <= p && i <= n; i++) {
        if (p % i == 0 && n % i == 0){ // check if i is a factor of both integers
           help = i;}
    }
    re = re / help;
    return (int) re;
}

/*tested with
 * 3,2 = 6
 *
 */