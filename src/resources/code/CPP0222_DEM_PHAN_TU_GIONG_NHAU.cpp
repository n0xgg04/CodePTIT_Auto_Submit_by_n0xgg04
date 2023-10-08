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

int n, a[105][105];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = 0; j < n; j++) {
            s.insert(a[i][j]);
        }
        for (auto e:s) {
            m[e]++;
            if (m[e] == n) ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}