#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int binary_search(int a[], int x, int l, int h) {
	if (l <= h) {
		int mid = (l + h) / 2;
		if (a[mid] == x) return 1;
		else if (a[mid] > x) return binary_search(a, x, l, mid - 1);
		else return binary_search(a, x, mid + 1, h);
	}
	return -1;
}

int n, x, a[100000];
void run_test_case() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	cout << binary_search(a, x, 0, n - 1) << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

