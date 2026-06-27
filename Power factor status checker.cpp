#include <iostream>
using namespace std;

int main() {
    double pf;
    cout << "Enter the power factor: ";
    cin >> pf;

    if (pf < 0 || pf > 1) {
        cout << "Invalid power factor" << endl;
    } else if (pf <= 0.50) {
        cout << "Poor power factor" << endl;
    } else if (pf <= 0.80) {
        cout << "Fair power factor" << endl;
    } else if (pf <= 0.95) {
        cout << "Good power factor" << endl;
    } else {
        cout << "Excellent power factor" << endl;
    }

    return 0;
}
