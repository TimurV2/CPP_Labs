#include <iostream>
#include <cmath>

using namespace std;

double length(int(&points)[5][2], int row) {
	if (row != 0 && row <= 4) {
		cout << pow((points[row][0] - points[row - 1][0]),2) - pow((points[row][1] - points[row - 1][1]),2) << " " << "ASDASDASD\n";
		return sqrt(pow((points[row][0] - points[row-1][0]), 2) - pow((points[row][1] - points[row - 1][1]), 2));
	}
	else if (row == 0) {
		return sqrt(pow((points[0][0] - points[4][0]), 2) - pow((points[0][1] - points[4][1]), 2));
	}
	if (row == 30) {
		return sqrt(pow((points[3][0] - points[0][0]), 2) - pow((points[3][1] - points[0][1]), 2));
	}
	if (row == 20) {
		return sqrt(pow((points[2][0] - points[0][0]), 2) - pow((points[2][1] - points[0][1]), 2));
	}
}

double triangle_area(double a, double b, double c) {
	double p = 0, area = 0;
	p = (a + b + c) / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

double exodus(int(&points)[5][2]) {
	double a, b, c, d, e, f, g;
	a = length(points, 1);
	b = length(points, 2);
	c = length(points, 3);
	d = length(points, 4);
	e = length(points, 0);
	f = length(points, 20);
	g = length(points, 30);
	return triangle_area(a, b, f) + triangle_area(f, g, c) + triangle_area(e, d, g);
}

int main() {
	int points[5][2], sum = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> points[i][j];
		}
	}
	cout << exodus(points);
}