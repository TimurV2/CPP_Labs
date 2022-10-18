#include <iostream>
#include <cmath>

using namespace std;

double powering(double x) {
    double y, y1;
    y = x;
    do {
        y1 = y;
        y = (1.0 / 3) * (y * 2 + (x / (y * y)));
    } while (abs(y - y1) > 1 / 100000);
    return y;
}

int main() {
    double a;
    cout << "Enter a digit\n";
    a = 8;
    cout << "The answer is: " << powering(a);
}