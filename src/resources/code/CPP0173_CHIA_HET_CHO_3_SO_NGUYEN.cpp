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

ll x, y, z, n;
void run_test_case() {
    cin >> x >> y >> z >> n;
    ll low = (ll)pow(10, n - 1);
    ll high = low * 10;
    ll b = lcm(x, lcm(y, z));
    if (b >= high) {
        cout << -1 << endl;
        return;
    }
    ll multiply = low / b;
    if (low % b != 0) {
        multiply++;
    }
    cout << b * multiply << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}