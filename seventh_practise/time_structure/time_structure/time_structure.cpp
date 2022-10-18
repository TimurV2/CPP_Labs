#include <iostream>

using namespace std;

struct Time
{
	int hours, minutes, seconds;
};

void substruction_time(const Time t1, const Time t2) {

	Time t3;
	int sec_1, sec_2;
	sec_1 = t1.hours * 60 * 60 + t1.minutes * 60 + t1.seconds;
	sec_2 = t2.hours * 60 * 60 + t2.minutes * 60 + t2.seconds;
	t3.hours = abs(sec_1 - sec_2) / 3600;
	t3.minutes = (abs(sec_1 - sec_2) - t3.hours * 3600) / 60;
	t3.seconds = abs(sec_1 - sec_2) - t3.hours * 3600 - t3.minutes * 60;

	cout << "Time substruction: " << "Hours - " << t3.hours << " " << "Minutes - " << t3.minutes << "Seconds - " << t3.seconds << "\n";
}

void addition_times(const Time t1, const Time t2) {

	Time t3;
	int sec_1, sec_2;
	sec_1 = t1.hours * 60 * 60 + t1.minutes * 60 + t1.seconds;
	sec_2 = t2.hours * 60 * 60 + t2.minutes * 60 + t2.seconds;
	t3.hours = abs(sec_1 + sec_2) / 3600;
	t3.minutes = (abs(sec_1 + sec_2) - t3.hours * 3600) / 60;
	t3.seconds = abs(sec_1 + sec_2) - t3.hours * 3600 - t3.minutes * 60;

	cout << "Time addition: " << "Hours - " << t3.hours << " " << "Minutes - " << t3.minutes << "Seconds - " << t3.seconds << "\n";
}

Time InputTime() {

	Time t;
	cout << "Insert hours - ";
	cin >> t.hours; 
	cout << endl;
	cout << "Insert minutes - ";
	cin >> t.minutes;
	cout << endl;
	cout << "Insert seconds - ";
	cin >> t.seconds;
	cout << "\n\n";
	return t;

}

void main() {
	
	Time t1, t2;
	t1 = InputTime();
	t2 = InputTime();
	
	addition_times(t1, t2);
	substruction_time(t1, t2);

}