#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Enter cable temperature (°C): ";
    cin >> temp;

    if (temp > 70) {
        cout << "Cable overheating detected." << endl;
    } else {
        cout << "Cable temperature is within safe range." << endl;
    }

    return 0;
}
