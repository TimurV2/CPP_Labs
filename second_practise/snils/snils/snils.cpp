#include <iostream>
#include <string>

using namespace std;

string check_sum(int sum) {

	if (sum < 100) {
		return to_string(sum);
	}
	if (sum == 100 || sum == 101) {
		return "00";
	}
	if (sum > 101) {
		int tempr;
		tempr = sum % 101;
		if (tempr < 100) {
			return to_string(tempr);
		}
		else if (tempr == 100) {
			return "00";
		}
	}
}

int sum_per_chr(int character, int position) {
	return character * position;
}

int main() {
	string num;
	int sum = 0;
	cout << "Enter snils number:\n";
	cin >> num;

	for (int i = 0; i < 9; i++) {
		sum += sum_per_chr(int(num[i] - '0'), (9 - i));
	}

	if (check_sum(sum) != num.substr(num.length() - 2)) {
		cout << "\nFalse";
	}
	else if (check_sum(sum) == num.substr(num.length() - 2)) {
		cout << "\nTrue";
	}
	else {
		cout << "Error, check snils";
	}
}