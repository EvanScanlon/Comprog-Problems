#include <algorithm>
#include <cstdio>
#include <cstdint>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main()
{	
	string move;
	int top = 1;
	int north = 2;
	int west = 3;
	int input,temp;
	while (cin >> input) {
		if (input == 0)break;
		else {
			for (int i = 0; i < input; i++) {
				cin >> move;
				if (move == "north") { 
					temp = top;
					top = (7 - north);
					north = temp;
				}
				else if (move == "south") {
					temp = north;
					north = (7 - top);
					top = temp;
				}
				else if (move == "west") {
					temp = top;
					top = (7 - west);
					west = temp;
				}
				else if (move == "east") {
					temp = west;
					west = (7 - top);
					top = temp;
				}
			}
			cout << top << endl;

		}
		top = 1;
		north = 2;
		west = 3;

	}

	return 0;
}
