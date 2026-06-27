#include <iostream>
using namespace std;

int main() {
    int passed_count = 0;
    int failed_count = 0;
    int result;

       for (int i = 1; i <= 15; i++) {
        cout << "Enter result for component " << i << " (1 = pass, 0 = fail): ";
        cin >> result;

                if (result == 1) {
            passed_count++;
        } else {
            failed_count++;
        }
    }

        cout << " Test Results " << endl;
    cout << "Number of passed components: " << passed_count << endl;
    cout << "Number of failed components: " << failed_count << endl;

    return 0;
}

