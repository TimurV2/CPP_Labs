#include <iostream>
#include <cmath>
#include <sstream>
#include <string>


using namespace std;

double area(double a) {
	double area = (sqrt(3) / 4) * (a * a);
	return area;
}

double area(double a, double b, double c) {
	double p = (a + b + c) / 2;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

int main() {
	bool check;
	double a, b, c;
	cout << "Is it equilateral triangle? Type '1' if yes and '0' if no\n";
	cin >> check;
	cout << endl;
	if (check) {
		cout << "Type triangle's side\n";
		cin >> a;
		cout << area(a);
	}
	else
	{
		cout << "Type all 3 sides\n";
		cin >> a >> b >> c;
		cout << area(a, b, c);
	}
	return 0;
}