#include <iostream>
#include <cmath>


using namespace std;

struct roots
{
	double x1, x2;
};

roots MyRoot(double a, double b, double c) {
	roots root;
	double D;
	double x, y;
	D = -4 * a * c + b * b;
	if (D < 0) {
		cout << "Корней нет";
		exit;
	}
	else if (D == 0) {

		root.x1 = -b / (2 * a);
		root.x2 = root.x1;

		return root;
	}
	else {

		root.x1 = (-b + sqrt(D)) / (2 * a);
		root.x2 = (-b - sqrt(D)) / (2 * a);
		
		return root;
	}
}

void show_roots(roots root) {
	cout << "Корень x1 = " << root.x1 << "\n" << "Корень x2 = " << root.x2;
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, x = 0, y = 0;
	roots exodus;
	cout << "Определите коэф. 'a' \n";
	cin >> a;
	cout << "Определите коэф. 'b' \n";
	cin >> b;
	cout << "Определите коэф. 'c' \n";
	cin >> c;
	cout << endl;
	exodus = MyRoot(a, b, c);
	show_roots(exodus);
}