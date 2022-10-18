#include <iostream>
#include <tuple>


using namespace std;
using Tuple = tuple<int, double, double>;


Tuple find_x12(int a, int b, int c) {

	double x = 0, y = 0;
	double D;

	D = -4 * a * c + b * b;

	if (D < 0) {
		return make_tuple(-1, x, y);
	}
	else if (D == 0) {
		x = double (- b) / (2 * a);
		y = x;
		return make_tuple(0, x, y);
	}
	else {
		x = (-b + sqrt(D)) / (2 * a);
		y = (-b - sqrt(D)) / (2 * a);
		return make_tuple(1, x, y);
	}

}

void print(tuple<int, double, double> my_tuple) {

	int flag = get<0>(my_tuple);
	double x = get<1>(my_tuple);
	double y = get<2>(my_tuple);

	if (flag < 0) {

		cout << "Корней нет" << "\n";
	
	}
	else if (flag == 0) {

		cout << "Корни уравнения x = y = " << x << "\n";
	
	}
	else {

		cout << "Корни уравнения x = " << x << "; y = " << y << "\n";
	
	}

}

void Input(int &a, int &b, int &c) {

	cout << "Введите переменную а: ";
	cin >> a;
	cout << endl;
	cout << "Введите переменную b: ";
	cin >> b;
	cout << endl;
	cout << "Введите переменную c: ";
	cin >> c;
	cout << endl;

}

void main() {

	setlocale(LC_ALL, "Russian");

	Tuple t;
	int a, b, c;

	Input(a, b, c);
	t = find_x12(a, b, c);

	print(t);

}