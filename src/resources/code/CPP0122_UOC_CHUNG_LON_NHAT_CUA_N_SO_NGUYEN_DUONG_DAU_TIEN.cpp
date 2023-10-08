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

ll lcm(ll a, ll b) {
    return a * b / __gcd(a, b);
}

ll n;
void run_test_case() {
    cin >> n;
    ll ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans = lcm(ans, i);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}