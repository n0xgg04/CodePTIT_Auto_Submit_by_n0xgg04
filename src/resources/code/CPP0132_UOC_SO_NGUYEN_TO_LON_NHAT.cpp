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

ll n;
void run_test_case() {
    cin >> n;
    ll ans = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            ans = i;
            n /= i;
        }
    }
    if (n >= 2) ans = n;
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}