#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double reading, totalValid = 0;
	
	for (int i = 1; i <= 10; i++) {
		cout << "Enter power reading " << i << ": ";
		cin >> reading;
		
		if (reading < 0) {
			cout << "Invalid reading skipped." << endl;
			continue;
		}
		
		totalValid += reading;
	}
	
	cout << "Total of only the valid power readings: " << totalValid << "W" <<endl;
	return 0;
}
