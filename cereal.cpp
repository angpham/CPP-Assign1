#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    float MT = 35273.92; // 1 metric ton = 35,273.92 ounces
    float weight = atof(argv[1]); // Command Line Input; Weight of Cereal Box in ounces
    float converted;
    float boxes;

    converted = weight/MT; // (MT/35,273.9) = (converted/input) --> converted = input/35,273.92
    boxes = 1/converted; // (1 box/converted in MT) = (boxes/1 MT) --> boxes = 1/converted

    cout << "Package weight (MT): " << converted << endl; // Output
    cout << "Number of Boxes to = 1 MT: " << boxes << endl; // Output

    return 0;
}
