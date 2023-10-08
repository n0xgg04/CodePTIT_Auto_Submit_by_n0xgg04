#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[100000];
void run_test_case() {
	cin >> n;
	int min = 1000000, ans = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(a[i] + a[j]) < min) {
				min = abs(a[i] + a[j]);
				ans = a[i] + a[j];
			}
		}
	}
	cout << ans << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

