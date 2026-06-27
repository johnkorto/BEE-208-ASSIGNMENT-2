#include <iostream>

using namespace std;

int main() {
	double v, i, r;
    char choice;

    // Main program loop
    do {
        // Your core program logic goes here
        cout << "Enter Voltage: ";
        cin >> v;
        cout << "Enter curremt: ";
        cin >> i;
        r = v / i;
        cout << "Resistance: " << r << "Ohms" << endl;
        
        // Loop until a valid choice ('Y', 'y', 'N', 'n') is provided
        while (true) {
            cout << "Do you want to continue? (Y/N): ";
            cin >> choice;

            // Clear the input buffer to handle multi-character mistakes (like "yes")
            cin.ignore(10000, '\n');

            if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n') {
                break; // Valid input received, exit the validation loop
            }
            
            cout << "Invalid input. Please enter only Y or N." << endl;
        }

    } while (choice != 'N' && choice != 'n'); // Main loop only exits on 'N' or 'n'

    return 0;
}

