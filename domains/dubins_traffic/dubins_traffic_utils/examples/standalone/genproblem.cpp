#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "roadnet.hpp"
#include "problem.hpp"

using namespace dubins_traffic;


int main( int argc, char *argv[] )
{
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " FILE" << std::endl;
        return 1;
    }

    std::string buf;
    std::ifstream infile( argv[1] );
    if (!infile.is_open()) {
        std::cerr << "Failed to open " << argv[1] << std::endl;
        return 1;
    }

    RoadNetwork rnd( infile );
    std::srand( std::time( 0 ) );
    Problem pinstance = Problem::random( rnd );

    std::cout << pinstance << std::endl;

    return 0;
}