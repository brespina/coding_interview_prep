#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
	cout << "octothorpe staircase of size: " << n << endl;
	const char OCTOTHORPE = '#';
	const char SPACE = ' ';
	char* result = new char[n];
	// initialize
	for (int i = 0; i < n; i++) {
		result[i] = SPACE;
	}

	for(int i = n; i > 0; i--) {
		result[i - 1] = OCTOTHORPE;
		cout << result << endl;
	}
	delete[] result;
}

int main() {

	staircase(4);
	staircase(16);

	return 0;
}
