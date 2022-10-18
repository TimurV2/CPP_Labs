#include <iostream>
#include <string.h>
#include <string>

using namespace std;



class Time
{
private:

	int hours;
	int minutes;
	int seconds;
	
public:
	
	class Time_exep {
	private:
		int err_val;
	public:
		Time_exep(int znach) {
			err_val = znach;
		}
		void error_msg() const { cout << "ќшибка в значении: " << err_val;}
	};

	int get_h() { return hours; }
	int get_m() { return minutes; }
	int get_s() { return seconds; }

	void set_h(int h) { hours = h; }
	void set_m(int m) { minutes = m; }
	void set_s(int s) { seconds = s; }

	
	Time() {
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	Time(int h, int m, int s) {
		hours = h % 24;
		
		if (h < 0 || m << 0 || s < 0) {
			throw Time_exep(min(min(h, m), s));
		}
		else {

			if (m >= 60) {
				minutes = m % 60;
				hours = (hours + (m / 60)) % 24;
			}
			else {
				minutes = m;
			}
			if (s >= 60) {
				seconds = s % 60;
				minutes = (minutes + s / 60) % 60;
				hours = (hours + (minutes + (seconds / 60)) / 60) % 24;
			}
			else
			{
				seconds = s;
			}
		}
	}
	void Show_time() {
		
		if (hours < 10) {
			cout << '0' << hours << ":";
		}
		else if (hours >= 10) {
			cout << hours << ":";
		}
		if (minutes < 10) {
			cout << '0' << minutes << ":";
		}
		else if (minutes >= 10) {
			cout << minutes << ":";
		}
		if (seconds < 10) {
			cout << '0' << seconds << "\n\n";
		}
		else if (seconds >= 10) {
			cout << seconds << "\n\n";
		}
		

	}

	void Sum_Times(Time t1, Time t2) {

		int h = (t1.get_h() + t2.get_h());
		int m = (t1.get_m() + t2.get_m());
		int s = (t1.get_s() + t2.get_s());
		
		if (s >= 60) {
			m++;
			s %= 60;
		}
		if (m >= 60) {
			h++;
			m %= 60;
		}
		h = h % 24;

		Time::set_h(h);
		Time::set_m(m);
		Time::set_s(s);

	}



};

int main()
{
	setlocale(LC_ALL, "Russian");
	int hrs, mnts, scnds;
	cout << "¬веите значени€ времени в формате {часы минуты секунды}: " << endl;
	cin >> hrs >> mnts >> scnds;
	try {
		Time test_obj = Time(hrs, mnts, scnds);
	}
	catch (Time::Time_exep& exep) {
		exep.error_msg();
	}
}