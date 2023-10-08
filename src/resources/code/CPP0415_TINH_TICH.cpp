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

int n, m, a, b;
void run_test_case() {
    cin >> n >> m;
    int c = 0, d = (int)1e9;
    for (int i = 0; i < n; i++) {
        cin >> a;
        c = max(c, a);
    }
    for (int i = 0; i < m; i++) {
        cin >> b;
        d = min(d, b);
    }
    cout << (ll)c * d << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}