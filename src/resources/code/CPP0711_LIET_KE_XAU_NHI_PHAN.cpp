#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void BinaryTry(int pos, string s) {
	if (pos == 0) {
		cout << s << " ";
		return;
	}
	BinaryTry(pos - 1, s + "0");
	BinaryTry(pos - 1, s + "1");
}

int n;
void run_test_case() {
	cin >> n;
	BinaryTry(n, "");
	cout << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

