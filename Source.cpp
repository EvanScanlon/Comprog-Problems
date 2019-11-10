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
	bool running = true;
	int count = 0;
	vector <int> prince(2),princess(3);
	int deck;
	vector <bool> valid;
	while (cin >> princess[0] >> princess[1] >> princess[2] >> prince[0] >> prince[1], princess[0]) {
		valid.clear();
		valid.resize(53,true);
		for (int i = 0; i < 3; ++i) {
			valid[princess[i]] = false;
			if (i < 2) {
				valid[prince[i]] = false;
			}
		}
		deck = 53;

		sort(princess.begin(),princess.end());
		sort(prince.begin(), prince.end());
		
		if (prince[0]>princess[2]) {	//princes lowest is better than her highest
			for (int i = 1; (i <= 52) && (i < deck); ++i){
				if (valid[i]) {
					deck = i;
				}
		}
		}

		if (prince[1]>princess[2]) {	//if she has one card better than all other cards
			for (int i = princess[2] + 1; i <= 52 && i < deck; ++i)
			{
				if (valid[i]) {
					deck = i;
				}
			}
		}

		if (prince[0] > princess[1]){	//if princes lowest is bigger than two of hers
			for (int i = princess[1] + 1; i <= 52 && i < deck; ++i) {
				if (valid[i]) {
					deck = i;
				}
			}
		}

		if (deck==53) {
			deck = -1;
		}

		cout << deck << endl;

	}

	return 0;
}
