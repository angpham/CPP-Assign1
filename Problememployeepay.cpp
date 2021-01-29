#include <iostream>
using namespace std;

int main(int argc, char **argv) // Make sure to put in a command input for the hours worked
{
    int reg = 16; // Regular Pay
    float over = reg * 1.5; // Overtime Pay
    int med = 10; // Medical Insurance Withheld
    float ss;
    float fed;
    float state;
    float hoursWorked = atof(argv[1]); // Command Line Input
    float rtime;
    float otime;
    float gross;
    float net;

    // Assign either regular hours or overtime
    if (hoursWorked > 40) {
        otime = hoursWorked - 40; // Hours that are overtime
        rtime = 40;
    }
    else { // Less than or equal to 40 hours; no overtime
        otime = 0;
        rtime = hoursWorked;
    }

    gross = (rtime * reg) + (otime * over);
    ss = gross * 0.06; // Social Security Tax withheld
    fed = gross * 0.14; // Federal tax withheld
    state = gross * 0.05; // State tax withheld
    net = gross - ss - fed - state - med; // Subtract all withheld from gross pay

    // Outputs [(WH) = withheld]
    cout << "Gross Pay: $" << gross << endl;
    cout << "(WH) Social Security Tax: $" << ss << endl;
    cout << "(WH) Federal Income Tax: $" << fed << endl;
    cout << "(WH) State Income Tax: $" << state << endl;
    cout << "(WH) Medical Insurance: $" << med << endl;
    cout << "Net Take-Home Pay: $" << net << endl;

    return 0;
}
