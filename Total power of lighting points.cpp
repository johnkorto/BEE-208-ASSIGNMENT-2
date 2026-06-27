#include <iostream>
using namespace std;

int main() {
    double power, total = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "Enter Power Rating for Lighting Point " << i << ": ";
        cin >> power;
        total += power;
    }

    cout << "Total power: " << total << "W" << endl;
    return 0;
}
