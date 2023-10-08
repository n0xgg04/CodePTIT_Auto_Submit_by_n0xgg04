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

int n;
void run_test_case() {
    cin >> n;
    ll ans = 0, p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
        ans += p;
    }
    cout << ans << endl;
}

int main() {
    faster();
    run_test_case();
}