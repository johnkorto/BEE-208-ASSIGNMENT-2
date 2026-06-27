#include <iostream>
using namespace std;

int main() {
    double reading;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation reading " << i << " (Mohm): ";
        cin >> reading;

        if (reading < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}

