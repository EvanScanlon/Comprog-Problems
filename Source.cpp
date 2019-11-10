#include <vector>
#include <iostream>

using namespace std;
int main() {
	bool running = true;
	double h1, u1, d1, f1;
	int day = 0;
	double well,fatigue;
	double total = 0;
	while((cin >> h1 && h1!=0)) {	//input for snail stats
		total = 0;
		day = 0;
		cin >> u1 >> d1 >> f1;
			well = h1;	//declaring well height
			fatigue = u1 * (f1 / 100);	//determining fatigue to be lost each day
			while (running) {
				if (u1<0) {
					u1 = 0;
				}

				total += u1;	//snail climbs
				
				if (u1>0) {
					u1 -= fatigue;	//fatigue for next day
				}
				day++;	//days since beginning
				if (total > well) {	//if snail has climbed the well, success, break. day
					cout << "success on day " << day << endl;
					break;
				}
				total -= d1; //snail slides down. night
				if (total < 0) {	//if snail has hit a negative number or zero, failure, break
					cout << "failure on day " << day << endl;
					break;
				}
				
				cout << "Height = " << total << endl;
				cout << "Climbing Per Day = " << u1 << endl;
		}
	}


	return 0;
}