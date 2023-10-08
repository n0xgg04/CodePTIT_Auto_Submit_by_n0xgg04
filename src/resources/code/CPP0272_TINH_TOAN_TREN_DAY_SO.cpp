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

ll mu(ll a, ll k) {
    if (k == 0) return 1;
    ll m = mu(a, k / 2);
    if (k&1) return a * m % mod * m % mod;
    return m * m % mod;
}

ll n, a[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    ll h = 1, g = 1;
    h = g = a[0];
    for (int i = 1; i < n; i++) {
        h *= a[i];
        h %= mod;
        g = __gcd(g, a[i]);
        g %= mod;
    }
    cout << mu(h, g) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}