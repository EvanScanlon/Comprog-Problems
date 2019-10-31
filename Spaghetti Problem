#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <random>

using namespace std;
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	double temp = 0.0;
	double nibble = 0.0;
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(0, 1);
	double dif;
	int count = 0;
	double max = 25000;
	double maxno = 1.0;
	cin >> nibble;
	double perc = (double)nibble / 100;
	for (int i = 0; i < max; i++) {
		vector<double>pieces;
		double l1 = dis(gen);
		while ((l1==0)||(l1==1)) {
			l1 = dis(gen);
		}
		//cout << l1 << endl;
		double l2 = dis(gen);
		while ((l1 == l2)||(l2==0)||(l2==1)) {
			l2 = dis(gen);
		}
		//cout << l1 << endl;
		//cout << l2 << endl;
		if (l1 > l2) {
			temp = l1;
			l1 = l2;
			l2 = temp;
		}
		cout << l1 << " is point 1." << endl;
		cout << l2 << " is point 2." << endl;
		pieces.push_back(l1);
		pieces.push_back(l2 - l1);
		pieces.push_back(1 - l2);
		sort(pieces.begin(), pieces.end());
		cout << "Lengths: "<< pieces[0] << ", " << pieces[1] << ", " << pieces[2] << endl;
		//cout << count << endl;
		if ((pieces[0] + pieces[1] >= pieces[2]) && (pieces[1] + pieces[2] >= pieces[0]) && (pieces[0] + pieces[2] >= pieces[1])) {
			cout << "Triangle" << endl;
			count++;
		}
		else {
			if (pieces[0] + pieces[1] < pieces[2]) {
				dif = pieces[2] - pieces[0] - pieces[1];
				if (dif / pieces[2] <= perc) {
					cout << "Triangle w/ Nibble" << endl;
					count++;
				}
			}
		}
	}

	double inc = (double)count;
	double ans = (double)(inc / max) * max;
	//ans = round(ans);
	cout << (int)ans << endl;
	return 0;
}
