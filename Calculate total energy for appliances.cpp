#include <iostream>
using namespace std;

int main() {
    double energy;
    double totalEnergy = 0.0;
    const int numAppliances = 8;

    cout << "--- Household Appliance Energy Monitor ---"<<endl;

       for (int i = 1; i <= numAppliances; ++i) {
        cout << "Enter energy consumption (kWh) for appliance " << i << ": ";
        cin >> energy;
        totalEnergy += energy;
    }

    cout << "Total Energy Consumed by all appliances: " << totalEnergy << " kWh"<<endl;

    return 0;
}

