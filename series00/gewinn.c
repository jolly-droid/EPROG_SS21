/*Sie gewinnen x∈R>0 bei einem Spiel. Dieses Geld wollen Sie fair auf
Ihre n∈N Freunde aufteilen. Wieviel Geld y∈R>0 bekommen Sie und jeder Ihrer Freunde?
Die Werte x∈R>0 und n∈N sollen eingegeben werden und am Schluss soll y∈R>0 am Bildschirm
ausgegeben werden.
Sie den Source-Code unter gewinn.cin das Verzeichnisserie00. */

#include <stdio.h>

int main(int argc, char* argv[]){
    double money;
    int friends;

    printf("How many friends? :");
    scanf("%d",&friends);
    if(friends <= 0){
        printf("You don't have any friends");
        return -1;
    }
    printf("How much money?:");
    scanf("%lf",&money);
    if(money <= 0){
        printf("you dont have enough money!");
        return -1;
    }
    //typecasting - always use the bigger one
    double result = money/friends;

    printf("Everybody gets %f ", result);

    return 0;
}