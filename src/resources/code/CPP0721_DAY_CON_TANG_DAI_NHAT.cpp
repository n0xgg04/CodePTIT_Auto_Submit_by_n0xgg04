#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

int n, a[MAX];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	int f[MAX] = {};
	for (int i = 0; i < n; i++) {
		f[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}
	cout << *max_element(f, f + n) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}

