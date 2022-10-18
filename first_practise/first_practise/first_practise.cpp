#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int n = 0;
	double sq = 0;
	int x[6];
	int y[6];
	cout << "Write coordinates\n";
	for (int i = 1; i < 6; i++) {
		cin >> x[i];
		cin >> y[i];
	}
	sq = 0.5 * abs(x[1] * y[2] + x[2] * y[3] + x[3] * y[4] + x[4] * y[5] + x[5] * y[1] - x[2] * y[1] - x[3]*y[2] - x[4] * y[3] - x[5] * y[4] - x[1] * y[5]);
	cout << endl;
	cout << "Polygon area" << " " << sq;
}


