#include <iostream>
#include <random>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

void sort(int array[], const int n) {
	int min = 0;
	int buf = 0;

	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (array[j] < array[min]) ? j : min;

		if (i != min)
		{
			buf = array[i];
			array[i] = array[min];
			array[min] = buf;
		}
	}
}

void show_array(int array[], const int n) {
	cout << "Sorted array: ";
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void touch_array(int array[], const int n) {
	ofstream out;

	out.open("C:\\Users\\1\\Documents\\Array.txt", ios::app);

	for (int i = 0; i < n; i++) {
		out << array[i] << " ";
	}
	out << "\n\n";

}

void main() {

	const int n = 10;
	int array[n];
	cout << "Original array: ";
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 100 + 1;
		cout << array[i] << " ";
	}

	touch_array(array, n);

	cout << endl;
	sort(array, n);

	touch_array(array, n);

	show_array(array, n);

}
