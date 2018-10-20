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
#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main(int argc, char *argv[]){
	int n, e;
 	int seed;

    std::mt19937_64 rng;
    rng.seed(atoi(argv[2]));

    n = atoi(argv[1]);
    printf("%d\n", -2);
    
    // initialize a uniform distribution between 0 and 1
    std::uniform_real_distribution<double> unif(0, 1);
             
    //root
	for(int i = 0; i < n; i++) {
        double x = unif(rng);
        double y = unif(rng);
        double z = unif(rng);
        printf("%lf %lf %lf\n", x, y, z);
	}
    
    return 0;
}



