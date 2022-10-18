#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class LengthError {

public:
	LengthError () : message ("\nНесуществующий треугольник") {}
	void printMessage() const { cout << message << endl; }

private:
	string message;

};

double area(double *a, double *b, double *c) {

	if ((*a > (*b + *c)) || (*b > (*a + *c)) || (*c > (*a + *b)))
		throw LengthError();
	double p = (*a + *b + *c) / 2;
	double area = sqrt(p * (p - *a) * (p - *b) * (p - *c));
	return area;

}

void main() {
	
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	cout << "Введите стороны треугольника: \n";
	cin >> a >> b >> c;
	cout << endl;
	try {
		cout << area(&a, &b, &c);
	}
	catch (LengthError& error) {
		cout << "Ошибка:";
		error.printMessage();
	}

}