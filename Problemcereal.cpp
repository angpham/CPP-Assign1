#include <iostream>
using namespace std;

int main(int argc, char **argv) // Make sure to put in a command input for the weight of a cereal box package
{
    float MT = 35273.92; // 1 metric ton = 35,273.92 ounces
    float weight = atof(argv[1]); // Command Line Input
    float converted;
    float boxes;

    converted = weight/MT; // PROPORTION -> FORMULA: (MT/35,273.9) = (converted/input) --> converted = input/35,273.92
    boxes = 1/converted; // PROPORTION -> FORMULA: (1 box/converted in MT) = (boxes/1 MT) --> boxes = 1/converted

    cout << "Package Weight (MT): " << converted << endl; // Output
    cout << "Number of Boxes to = 1 MT: " << boxes << endl; // Output

    return 0;
}
