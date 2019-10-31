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
	int input;
	cin >> input;
	vector <int> numbers;
	for (int i = 0; i < input; i++) {
		int num1;
		int num2;
		cin >> num1 >> num2;
		numbers.push_back(num1);
		numbers.push_back(num2);
	}
	for (int i = 0; i < 2 * input; i++) {
		if (numbers[i]<numbers[i+1]) {
			cout << "<" << endl;
		}
		else if (numbers[i]>numbers[i+1]) {
			cout << ">" << endl;
		}
		else {
			cout << "=" << endl;
		}
		i++;
	}


	return 0;
}
