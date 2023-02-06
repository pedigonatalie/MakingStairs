// practice for making stairs/ triangle
// june 16 2022

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	char choice;

	do {

		int steps;
		char symbol;
		cout << "Lets make stairs!\n";
		cout << "Number of steps: ";
		cin >> steps;
		cout << "Symbol (ex. #, *, /): ";
		cin >> symbol;

		for (int i = 1; i <= steps; i++) {
			for (int j = 1; j <= i; j++) {
				cout << setw(3) << symbol;
			}

			cout << endl;
		}

		cout << "\nHere it is inverted: " << endl << endl;
		for (int i = steps; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				cout << setw(3) << symbol;
			}

			cout << endl;
		}

		cout << "Would you like to run the program again? (Y/N)";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');
}