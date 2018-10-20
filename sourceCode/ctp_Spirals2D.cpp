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
	srand(atoi(argv[2])) ;

    n = atoi(argv[1]);
    
    double MaXradius = (rand()%n) + n/2.0f;
    
    printf("%d\n", -1);
    
    double centerX, centerY;
    centerX = centerY = n;
    
    double slice =  (2*M_PI) / (rand() % n + 5.0f);
    double radiusStep = MaXradius/n;
    
    printf("%lf %lf\n", centerX, centerY);
    
    for(int i = 1; i < n; i++) {
        double angle = slice * i;
        double newX = centerX + radiusStep*i * cos(angle);
        double newY = centerY + radiusStep*i * sin(angle);

        printf("%lf %lf\n", newX, newY);
    }
    
    return 0;
}
