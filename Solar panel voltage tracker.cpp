#include <iostream>
using namespace std;

int main() {
    double voltage;

    // Fetching the baseline reading
    cout << "Enter initial solar panel voltage (V): ";
    cin >> voltage;

    // Loop runs continuously as long as the voltage stays safe (>= 18V)
    while (voltage >= 18.0) {
        cout << "Status: NORMAL. Panel operating within safe bounds." << endl;
        cout << "Enter next voltage reading (V): ";
        cin >> voltage;
    }

    // Executes immediately when the loop breaks (< 18V)
    cout << "\n=========================================" << endl;
    cout << "WARNING: Under-voltage detected at " << voltage << " V!" << endl;
    cout << "Voltage dropped below 18 V threshold. Stop monitoring." << endl;
    cout << "=========================================" << endl;

    return 0;
}
