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
	int num, query, grade;
	string name;
	vector <pair<int, string>> students;
	cin >> num >> query;
	while (num--) {
		cin >> name >> grade;
		students.emplace_back(-grade, name);
	}

	sort(students.begin(), students.end());

	for (int i = 0; i < num; i++) {
		cout << students[i].first << " " << students[i].second << endl;
	}
	cout << -students[query-1].first << " " << students[query-1].second << endl;;
	return 0;
}
