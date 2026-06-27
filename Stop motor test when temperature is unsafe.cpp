#include <iostream>
using namespace std;

int main() {
    double temperature;

    // Initial reading before entering the loop
    cout << "Enter initial motor temperature (in °C): ";
    cin >> temperature;

    // While loop monitors the condition continuously
    while (temperature <= 90.0) {
        cout << "Status: SAFE. Motor running normally." << endl;
        cout << "Enter next temperature reading (in °C): ";
        cin >> temperature;
    }

    // This executes only when the loop condition becomes false (> 90)
    cout << "\n=========================================" << endl;
    cout << "CRITICAL ALERT: Temperature reached " << temperature << "°C!" << endl;
    cout << "Unsafe conditions detected. Stop motor test immediately." << endl;
    cout << "=========================================" << endl;

    return 0;
}

