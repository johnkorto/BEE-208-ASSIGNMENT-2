#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    int attempts = 0;
    bool granted = false;

    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;
        if (code == "BEE208") {
            cout << "Access granted." << endl;
            granted = true;
            break;
        }
        attempts++;
    }

    if (!granted) {
        cout << "Access denied. Maximum attempts reached." << endl;
    }
    return 0;
}
