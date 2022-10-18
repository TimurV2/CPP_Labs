#include <iostream>

using namespace std;

int sum(int n) {
	int plus = 0;
	if (n == 0) {
		return 0;
	}
	else {
		plus += n * 5;
		return plus + sum(n-1);
	}
}

int main() {
	int n;
	cout << "Enter n:\n";
	cin >> n;
	cout << "Sum is " << sum(n);
}