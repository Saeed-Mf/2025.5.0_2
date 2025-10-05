#include <iostream>

using namespace std;

int main() {
	cout << "enter your password!\n";
	int pass;
	cin >> pass;
	if (pass == 4444) {
		cout << "\tAcces granted\t";
		return 1;
	}
	cout << "\tAcces denied\t";

	return 0;
}