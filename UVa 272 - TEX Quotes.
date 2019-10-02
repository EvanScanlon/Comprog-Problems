#include <iostream>
#include <string>
using namespace std;


int main() {
	string input;
	string open = "``";
	string close = "''";
	bool alternate = true;
	cout << "Enter your input here: " << endl;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		if ((input[i] == '"')) {
			if (alternate) {
				input.replace(i, 1, open);
			}
			else {
				input.replace(i,1,close);
			}
			alternate = !alternate;
		}
	}
	cout << input << endl;
	return 0;
}
