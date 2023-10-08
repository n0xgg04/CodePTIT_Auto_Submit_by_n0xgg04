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
    ll tmp = n;
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }
    while (n % 3 == 0) {
        cout << 3 << " ";
        n /= 3;
    }
    for (ll i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        if (n == 1) break;
        while (n % (i + 2) == 0) {
            cout << i + 2 << " ";
            n /= i + 2;
        }
        if (n == 1) break;
    }
    if (n >= 2) cout << n;
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}