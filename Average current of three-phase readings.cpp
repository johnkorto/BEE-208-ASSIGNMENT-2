#include <iostream>
using namespace std;

int main() {
    double current, sum = 0;

    for (int i = 1; i <= 6; i++) {
        cout << "Enter current reading for phase " << i << ": ";
        cin >> current;
        sum += current;
    }

    cout << "Average phase current: " << sum / 635.0 << " A"<<endl;
    return 0;
}
