#include <iostream>
#define ull unsigned long long

using namespace std;

int main() {
	int t = 0;
	ull x = 0;
	ull y = 0;
	int c = 0;
	cin >> t;

	while (t>0) {
		cin >> x;
		if (y < x) {
			y = x;
			c=1;
		}
		else if (y > x) {
			y = x;
			c=2;
		}
		else if (y == x) {
			ull z = x;
			if (z == y) {
				c = 0;
			}
		}
		t--;
	}

	switch (c) {
	case 0: 
		cout << "equal";
		break;
	case 1:
		cout << "increasing";
		break;
	case 2: 
		cout << "decreasing";
		break;
	default:
		cout << "nothing";
	}








	return 0;
}
