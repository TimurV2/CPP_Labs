#include <iostream>
#include <string>

using namespace std;

int binary(int decimal) {
	
	if (decimal == 0) {
		return 0;
	}
	else {
		return decimal % 2 + 10 * binary(decimal / 2);
	}

}

int main() {
	int digit;
	cout << "Enter the decimal \n";
	cin >> digit;
	cout << "\nBinary is " << binary(digit) << "\n";
	return 0;
}