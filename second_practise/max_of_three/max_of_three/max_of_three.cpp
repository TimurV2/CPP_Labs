#include <iostream>

using namespace std;

int find_max(int frst, int scnd) {
	if (frst >= scnd) {
		return frst;
	}
	else {
		return scnd;
	}
}

int main() {
	int x, y, z;
	cout << "Input 3 numbers\n";
	cin >> x >> y >> z;
	cout << "Max number is " << find_max(find_max(x, y), z);
}