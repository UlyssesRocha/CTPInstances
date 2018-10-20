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

#define MAX(A,B) A > B ? A:B

using namespace std;

int main(int argc, char *argv[]){
    
    int n, e;
    
    std::mt19937_64 rng;
    
    rng.seed(atoi(argv[2]));
    srand(atoi(argv[2])) ;
    
    vector<double> x;
    vector<double> y;
    vector<double> z;
    
    n = atoi(argv[1]);
    
    // initialize a uniform distribution between 0 and 1
    std::uniform_real_distribution<double> unif(0, 1);
    
    std::uniform_int_distribution<> dis(1, 2 * ceil(sqrt(n)));
    
    int numberOfGrids = dis(rng);
    
    printf("%d\n", -1);
    
    //root
    printf("%lf %lf\n", double(unif(rng)), double(unif(rng)));

    for(int i = 0; i < numberOfGrids; i++) {
        x.push_back(double(unif(rng)));
        y.push_back(double(unif(rng)));
        z.push_back(double(unif(rng)));
    }

    std::uniform_real_distribution<double> close(-0.15, 0.15);

    for(int i = 1; i < n; i++) {
        int index = rand() % x.size();
        double deltX = close(rng);
        double deltY = close(rng);
        double deltZ = close(rng);

        printf("%lf %lf\n", x[index] + deltX , y[index] + deltY);
    }
    return 0;
}
