#include <iostream>
using namespace std;

bool IsPrime(int x) {
	int sqr_x;
	sqr_x = trunc(sqrt(x));
	for (int i = 2; i <= sqr_x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

bool NumIsPrime(int x) {
	int num_of_num = 0;
	for (int i = 2; i <= x; i++) {
		if (IsPrime(i)) {
			num_of_num++;
		}
	}
	if (IsPrime(num_of_num)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int x;
	double sqr_x;
	cout << "Input integer number\n";
	cin >> x;
	if (IsPrime(x) && NumIsPrime(x)) {
		cout << "The number is ultra-prime";
	}
	else {
		cout << "The number is composite";
	}
}