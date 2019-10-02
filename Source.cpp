#include <iostream>
#include <cstdio>
#include <string>
#include <sstream> 
using namespace std;

int main() {
	int pos; int num1; int num2; int num3;
	cin >> pos; cin >> num1; cin >> num2; cin >> num3;
	double result = 1080;

	result += (pos - num1+40)%40 * 9;
	result += (num2 - num1+40)%40 * 9;
	result += (num2 - num3+40)%40 * 9;

	cout << result;
	return 0;
}