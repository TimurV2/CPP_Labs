#include <iostream>

using namespace std;

int sum_arr_pos_neg(const int Arr[], const int n, bool check) {
	int sum = 0;
	if (check) {
		for (int i = 0; i < n; i++) {
			if (Arr[i] > 0) {
				sum += Arr[i];
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (Arr[i] < 0) {
				sum += Arr[i];
			}
		}
	}
	return sum;
}

int sum_arr_odd_even(const int Arr[], const int n, bool check) {
	int sum = 0;
	if (check) {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				sum += Arr[i];
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (i % 2 != 0) {
				sum += Arr[i];
			}
		}
	}
	return sum;
}

void min_max(const int Arr[], const int n, int *x_max, int *x_min) {
	int min = Arr[0], max = Arr[0];
	for (int i = 0; i < n; i++) {
		if (min > Arr[i]) {
			min = Arr[i];
			*x_min = i;
		}
		if (max < Arr[i]) {
			max = Arr[i];
			*x_max = i;
		}
	}
	cout << "Min value = " << min << "; Index = " << *x_min;
	cout << "\n";
	cout << "Max value = " << max << "; Index = " << *x_max;
	cout << "\n";
}

int multiplier(const int Arr[], const int n, int *x_max, int *x_min) {

	int mltpl = 1;

	if (*x_max > *x_min) {
		for (int i = *x_min+1; i < *x_max; i++) {
			mltpl *= Arr[i];
		}
	}
	else if (*x_max < *x_min) {
		for (int i = *x_max+1; i < *x_min; i++) {
			mltpl *= Arr[i];
		}
	}
	else if (*x_max == *x_min) {
		mltpl = 0;
	}
	return mltpl;
}

int main() {
	int x_max = 0, x_min = 0;
	const int n = 10;
	int array[n];
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	min_max(array, n, &x_max, &x_min);
	cout << "Sum of odd indices = " << sum_arr_odd_even(array, n, true) << "\n";
	cout << "Sum of even indices = " << sum_arr_odd_even(array, n, false) << "\n";
	cout << "Sum of positive numbers = " << sum_arr_pos_neg(array, n, true) << "\n";
	cout << "Sum of negative numbers = " << sum_arr_pos_neg(array, n, false) << "\n";
	cout << "Product of number between indices = " << multiplier(array, n, &x_max, &x_min);

}