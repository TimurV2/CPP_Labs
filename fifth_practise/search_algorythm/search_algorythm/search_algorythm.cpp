#include <iostream>


using namespace std;

void max_vect(const int size, int a[], int element) {

	int buf;

	for (int i = 0; i < size; i++) {
		if (a[i] == element) {

			buf = a[i];
			// a[0] = a[i];

			for (int j = i; j > 0; j--) {

				a[j] = a[j - 1];

			}
			a[0] = buf;
			break;
		}
	}	
}

int main()
{
	const int size = 10;
	int element = 1;
	int a[size] = { 1,2,3,4,5,6,7,8,9,10 };

	while (element != 0) {

		cout << "Type the element to search for or type '0' to stop -> ";
		cin >> element;
		cout << "\n";

		if (element == 0) { return 0; }
		max_vect(size, a, element);

		cout << "\n";
		cout << "Now array is:\n";

		for (int i = 0; i < size; i++)
			cout << a[i] << " ";
	}
}
