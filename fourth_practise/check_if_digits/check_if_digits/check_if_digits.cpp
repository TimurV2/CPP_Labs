#include <algorithm>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool Input(int &a, int &b) { //Проверка что оба числа имеют больше 2-х знаков
	if (a / 10 > 0 && b / 10 > 0) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int a, b;
	cout << "Input 'a' and 'b' variables \n";
	cin >> a >> b;
	if (Input(a, b) == false)
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << "\n" << s << " Success";
	return 0;
}