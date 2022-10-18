#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int add_scores(int x, int y, int center_x, int center_y) {
	srand(time(NULL));
	int miss_x = rand() % 2 - 1;
	int miss_y = rand() % 2 - 1;

	if (((x - center_x + miss_x) * (x - center_x + miss_x)) + ((y - center_y + miss_y) * (y - center_y + miss_y)) <= 1) {
		cout << "+10 points\n\n";
		return 10;
	}
	else if (((x - center_x + miss_x) * (x - center_x + miss_x)) + ((y - center_y + miss_y) * (y - center_y + miss_y)) <= 4) {
		cout << "+5 points\n\n";
		return 5;
	}
	else if (((x - center_x + miss_x) * (x - center_x + miss_x)) + ((y - center_y + miss_y) * (y - center_y + miss_y)) > 4) {
		cout << "missed\n\n";
		return 0;
	}
}


int shoot(int points = 50) {
	int x, y;
	int rand_x, rand_y, num_shots = 0;
	int score = 0;
	srand(time(NULL));
	rand_x = rand() % 4 + -4;
	rand_y = rand() % 4 + -4;
	while (score < points) {
		cout << "where to shoot?\n";
		cin >> x >> y;
		score += add_scores(x, y, rand_x, rand_y);
		num_shots++;
	}
	cout << "Your score is " << score << "\n";
	return num_shots;
}


int main() {
	int points;
	double hto_ya;
	cout << "Input the limit of points\n";
	cin >> points;
	cout << "You have random center of target and hindrance\n";
	if (points > 0) {
		hto_ya = shoot(points);
		if (hto_ya <= (points / 10) + 3) {
			cout << "Amount of shots " << hto_ya << " You are _Sniper_";
		}
		else if (hto_ya <= (points / 10) + 5) {
			cout << "Amount of shots " << hto_ya << " You are _Strelok_";
		}
		else if (hto_ya >= (points / 10) + 5) {
			cout << "Amount of shots " << hto_ya << " You are _Newbie_";
		}
	}
}