/*
 *   One way (not the best
 *  way) to approximate the numberπis the so calledLeibniz formulaπ=∞∑k=04(−1)k2k+ 1.
 *  Then-th partial sumP(n) =n∑k
 *  =04(−1)k2k+ 1(1)satisfies limn→∞P(n) =π. Write a functiondouble P(int n, int type)that computes and return
 *  sthe value ofP(n) using two different approaches:•using the expression (1) realized with a suitable loop (t
 *  ype=1),•in recursive form (type=2), exploiting the identityP(n) =4(−1)n2n+ 1+P(n−1).Moreover, write a main
 *  program that readsn∈Nfrom the keyboard and prints the resultingn-th partialsumP(n) (for both implementations)
 *  to the screen. Using the math library is not allowed.
 */
#include <stdio.h>
#include <assert.h>

double P(int n, int type);
int main(int argc, char* argv[]) {
    int n = 0, type = 0;
    printf("Please insert n:");
    scanf("%d", &n);
    assert(n>0);

        double res = P(n, 1);
        double res2 = P(n, 2);
        printf("the non recursive result is: %lf\n", res);
        printf("the recursive result is: %lf\n", res2);
        return 0;

}

double P(int n, int type){

    if(type == 1){
        double ret = 0, help = 4, help2, help3;
        for (int i = 0; i <= n; i++) {
            if(i%2 != 0) {
                help = help * (-1);
            }else{
                help = 4;
            }
            help2 = 2*i+1;
            help3 = help/help2;
            ret = ret+help3;

        }
        return ret;
    }

    if(type == 2){
        double ret = 0;
        if(n == 0){
            ret = ret + (double) 4/ (2*n+1);

        }else{
            ret = ret + (double) 4/ (2*n+1);
            //printf("%lf\n", ret);
            if(n%2 != 0){
                ret = ret *(-1);
            }
            return ret + P(n-1, 2);
        }
    }

}