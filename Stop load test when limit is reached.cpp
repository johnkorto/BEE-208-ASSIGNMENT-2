#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double rating, totalLoad = 0;
	
	for(int i = 1; i <= 20; i++) {
		 cout << "Enter power rating for appliance" << i << "(W): ";
		 cin >> rating;
		 
		 if (totalLoad + rating > 5000) {
		 	cout << "Maximun load exceeded. Stop adding appliances.";
		 	break;
		 }
		 
		 totalLoad += rating;
	}
	cout << "Final total load: " << totalLoad << "W" << endl;
	
	return 0;
	
}
