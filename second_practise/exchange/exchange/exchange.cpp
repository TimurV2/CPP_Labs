#include <iostream>

using namespace std;

int exchange(int x, int coin = 10) {
	int sum = 0;
	if (coin == 0) {
		return 0;
	}
	else {
		sum = x / coin + exchange(x - ((x / coin)*coin), coin / 2);
	}
	return sum;
}

int main() {
	int x;
	cout << "Nu kak tam s den'gami?\n";
	cin >> x;
	cout << "Quantity of coins is " << exchange(x);
}