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

struct Point3D {
    double x;
    double y;
    double z;
    Point3D(double x, double y, double z): x(x), y(y), z(z) {};
};

int main(int argc, char *argv[]){
	
	int n, e;
    
    std::mt19937_64 rng;
    
    rng.seed(atoi(argv[2]));
    srand(atoi(argv[2])) ;
    
    n = atoi(argv[1]);
    
    // initialize a uniform distribution between 0 and 1
    std::uniform_real_distribution<double> unif(0, 1);
    
    std::uniform_int_distribution<> dis(1, 2 * ceil(sqrt(n)));
    
    int numberOfGrids = dis(rng);
    
    vector<Point3D> gridGuideVertex;
    
    printf("%d\n", -2);

    //root
    printf("%lf %lf %lf\n", unif(rng), unif(rng), unif(rng));

    //gridGuiding vertex
	for(int i = 0; i < numberOfGrids; i++) {
        gridGuideVertex.push_back(Point3D(unif(rng), unif(rng), unif(rng)));
	}
    
    std::uniform_real_distribution<double> close(-0.15, 0.15);

    for(int i = 1; i < n; i++) {
        Point3D grid = gridGuideVertex[rand() % gridGuideVertex.size()];
        double deltX = close(rng);
        double deltY = close(rng);
        double deltZ = close(rng);
        
        printf("%lf %lf %lf\n", grid.x + deltX , grid.y + deltY, grid.z + deltZ);
    }
    return 0;
}
