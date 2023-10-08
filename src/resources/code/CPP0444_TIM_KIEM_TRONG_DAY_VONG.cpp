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
		if (a[mid] == x) return mid + 1;
		else if (a[mid] > x) return binary_search(a, x, l, mid - 1);
		else return binary_search(a, x, mid + 1, h);
	}
	return -1;
}

int n, x, a[100000];
void run_test_case() {
	cin >> n >> x;
	int index = 0;
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) index = i;
	}
	if (x < a[index]) {
		cout << binary_search(a, x, 0, index - 1)<< endl;
	}
	else if (x > a[index]) {
		cout << binary_search(a, x, index + 1, n - 1)<< endl;
	}
	else cout << index << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

