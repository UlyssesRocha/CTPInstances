#include <iostream>
#include <string>
#include <map>
#include <unordered_set>
#include <set>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <utility>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <random>
#include <sys/time.h>
#include <ctime>

using namespace std;


int main(int argc, char *argv[]){
	
	int n, e;
 	int seed;

    struct timeval time;
    std::mt19937_64 rng;
    
    rng.seed(atoi(argv[2]));
    srand(atoi(argv[2])) ;
    n = atoi(argv[1]);

    std::uniform_real_distribution<double> unif(0, ceil(sqrt(n)) + 1);

    
    double delta = unif(rng);
    
    printf("%d\n", -1);
    
    //root
	for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf %lf\n", i*delta, j * delta);
        }
	}
    
    return 0;
}
