#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "--- Fuse Selection Menu ---\n";
    cout << "1. 5 A Fuse\n";
    cout << "2. 10 A Fuse\n";
    cout << "3. 13 A Fuse\n";
    cout << "4. 20 A Fuse\n";
    cout << "5. 32 A Fuse\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Application: Lighting circuits or small domestic appliances.\n";
            break;
        case 2:
            cout << "Application: Immersion heaters or low-power kitchen appliances.\n";
            break;
        case 3:
            cout << "Application: Standard ring main plugs (e.g., kettles, irons).\n";
            break;
        case 4:
            cout << "Application: Radial cooker circuits or small air conditioners.\n";
            break;
        case 5:
            cout << "Application: High-power ring mains or electric showers.\n";
            break;
        default:
            cout << "Invalid selection. Please run the program again.\n";
            break;
    }

    return 0;
}

