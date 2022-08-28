#include <iostream>
using namespace std;


int main() {
	const int sits_in_bus = 50;
	int total;
	cin >> total;
	while (total != 0) {
		if (total > 50) {
			int empty = total % sits_in_bus;
			int empty1 = sits_in_bus - empty;
			cout << empty1;
			break;
		}
		else if (total < 50) {
			int empty = sits_in_bus - total;
			cout << empty;
			break;
		}
	}
	return 0;
}
