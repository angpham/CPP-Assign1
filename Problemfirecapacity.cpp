#include <iostream>
using namespace std;

int main(int argc, char **argv) // Make sure to put in command inputs for the max capacity of the room and the current attendance of the meeting
{
    int maxCapacity = atoi(argv[1]); // Command Line Input
    int attendance = atoi(argv[2]); // Command Line Input
    int diff = 0;

    if (attendance <= maxCapacity) { // Legal Meeting --> Max Capacity is met or not yet met 
        diff = maxCapacity - attendance;
        cout << "LEGAL! " << diff << " more can attend the meeting." << endl; // Output
    }
    else { // Illegal Meeting --> More people than Max Capacity
        diff = attendance - maxCapacity;
        cout << "ILLEGAL! " << diff << " must leave the room." << endl; // Output
    }

    return 0;
}
