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

ll n, x, a[1000000];
void run_test_case() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    ll ans = 0, p = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans += a[i] * p;
        ans %= mod;
        p *= x;
        p %= mod;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}