#include <iostream>
using namespace std;

int main() {
    double resistance;

    // Gather the initial measurement before entering the loop
    cout << "Enter initial earth resistance reading (in Ohms): ";
    cin >> resistance;

    // Loop continues monitoring while grounding conditions are safe (<= 5 Ohms)
    while (resistance <= 5.0) {
        cout << "Status: SAFE. Grounding system operating normally." << endl;
        cout << "Enter next resistance reading (in Ohms): ";
        cin >> resistance;
    }

    // Executes immediately when the condition fails (> 5 Ohms)
    cout << "\n==================================================" << endl;
    cout << "CRITICAL ALERT: High grounding resistance of " << resistance << " O detected!" << endl;
    cout << "Safety threshold exceeded (> 5 O). Stop testing immediately." << endl;
    cout << "==================================================" << endl;

    return 0;
}
