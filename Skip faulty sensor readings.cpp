#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double reading, sum = 0;
	int validCount = 0;
	
	for (int i = 1; i <= 12; i++) {
		cout << "Enter sensor reading " << i << ": ";
		cin >> reading;
		
		if (reading == 999) {
			continue;
		}  
		
		sum += reading;
		validCount++;
	}
	
	if (validCount > 0) {
		cout << "Average of valid readings: " << sum / validCount << endl;
	}  else { 
		cout << "No valid readings entered." << endl;
	}
	return 0;
}
