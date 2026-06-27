#include <iostream>

using namespace std;

int main() {
	double v, i, p;
    char choice;

    do {
        cout << "Enter Voltage: ";
        cin >> v;
        cout << "Enter Current: ";
        cin >> i;
        p = v * i;
        cout << "Power: " << p << "Watts" << endl;
        
     
        while (true) {
            cout << "Do you want to continue? (Y/N): ";
            cin >> choice;

            cin.ignore(10000, '\n');

            if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n') {
                break; 
            }
            
            cout << "Invalid input. Please enter only Y or N." << endl;
        }

    } while (choice != 'N' && choice != 'n');

    return 0;
}

