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

ll n, m, p;

ll power(ll a, ll n) {
    if (n == 0) return 1;
    ll val = power(a, n / 2) % p;
    if (n % 2 == 0) return val * val % p;
    return a * val % p * val % p;
}

void run_test_case() {
    cin >> n >> m >> p;
    cout << power(n, m) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}