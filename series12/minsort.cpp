#include <iostream>
#include <vector>

template <typename T> void minsort(std::vector<T> &v);

int main(){
    std::vector <double>  nodesx(4);
    nodesx[0] = 7.5; nodesx[1] = 7.2; nodesx[2] = 5.02; nodesx[3] = 5.41;

    minsort(nodesx);
    for (int i = 0; i < 4; ++i) {
        std::cout << " " << nodesx[i] ;
    }  std::cout << std::endl;

    std::vector <int>  nodesy(4);
    nodesy[0] = 1; nodesy[1] = 6; nodesy[2] = 5; nodesy[3] = 4;

    minsort(nodesy);
    for (int i = 0; i < 4; ++i) {
        std::cout << nodesy[i] ;
    }  std::cout << std::endl;

    std::vector <char>  nodesz(4);
    nodesz[0] = 'g'; nodesz[1] = 'f'; nodesz[2] = 'h'; nodesz[3] = 'a';

    minsort(nodesz);
    for (int i = 0; i < 4; ++i) {
        std::cout << nodesz[i];
    }  std::cout << std::endl;


    return 0;
}



template <typename T>
void minsort(std::vector<T> &v) {
    int j = 0, k = 0, argmin = 0;
    T tmp = 0;

    for (j = 0; j < v.size(); j++) {

        argmin = j;
        for (k = j + 1; k < v.size(); k++) {
            if ( v[argmin] > v[k]) {
                argmin = k;
            }
        }

        if (argmin > j) {
            tmp = v[argmin];
            v[argmin] = v[j];
            v[j] = tmp;
        }
    }
}



/*
 * aufwand n^2 bzw 4+ (n+5)*(n+2)
 *
 * 1000 in 1 sec
 * 2000 in 4 sec
 * 4000 in 16 sec
 *
 * klasse is quadratisch
 */
