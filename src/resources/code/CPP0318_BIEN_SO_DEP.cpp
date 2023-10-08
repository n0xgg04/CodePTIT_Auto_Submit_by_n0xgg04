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

bool check(vector<int> a) {
	if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4]) return true;
	if (a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return true;
	for (int x : a) {
		if (x != 6 && x != 8) return false;
	}
	return true;
}

string s;
void run_test_case() {
    cin >> s;
    string t = s.substr(5);
    vi a;
    for (auto i:t) {
        if (i >= '0' && i <= '9') {
            a.pb(i - '0');
        }
    }
    if (check(a)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}