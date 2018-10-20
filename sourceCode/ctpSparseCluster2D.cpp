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

    n = atoi(argv[1]);
    
    // initialize a uniform distribution between 0 and 1
    std::uniform_real_distribution<double> unif(0, n);
    
    std::uniform_int_distribution<> dis(1, ceil(sqrt(n)));
    
    int numberOfGrids = dis(rng);
    
    vector<pair<double, double> > gridGuideVertex;
    
    printf("%d\n", -1);

    //root
    printf("%lf %lf\n", unif(rng), unif(rng));

    //gridGuiding vertex
	for(int i = 0; i < numberOfGrids; i++) {
        gridGuideVertex.push_back(make_pair(unif(rng), unif(rng)));
	}
    
    std::uniform_real_distribution<double> close(-0.2, 0.2);

    for(int i = 1; i < n; i++) {
        pair<double, double> grid = gridGuideVertex[rand() % gridGuideVertex.size()];
        double deltX = close(rng);
        double deltY = close(rng);
        printf("%lf %lf\n", grid.first + deltX , grid.second + deltY);
    }
    return 0;
}
