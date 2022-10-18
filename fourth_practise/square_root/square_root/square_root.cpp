#include <iostream>
#include <cmath>


using namespace std;

int MyRoot(double a, double b, double c, double &x, double &y) {
	double D;
	D = -4 * a * c + b * b;
	if (D < 0) {
		return -1;
	}
	else if (D == 0) {
		x = -b / (2*a);
		y = x;
		return 0;
	}
	else {
		x = (-b + sqrt(D)) / (2 * a);
		y = (-b - sqrt(D)) / (2 * a);
		return 1;
	}
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, x = 0, y = 0;
	int check;
	cout << "���������� ����. 'a' \n";
	cin >> a;
	cout << "���������� ����. 'b' \n";
	cin >> b;
	cout << "���������� ����. 'c' \n";
	cin >> c;
	cout << endl;
	check  = MyRoot(a, b, c, x, y);
	if (check == 0) {
		cout << "������ ��������� ���� x1 = x2 = " << x;
	}
	else if (check == 1) {
		cout << "����� ��������� x1 = " << x << " ,x2 = " << y;
	}
	else {
		cout << "������ ��������� ���.\n";
	}
	return 0;
}
