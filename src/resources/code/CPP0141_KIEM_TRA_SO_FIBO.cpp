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

ll f[100];
void fib() {
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= 92; i++) {
        f[i] = f[i-1] + f[i-2];
    }
}

ll n;
void run_test_case() {
    cin >> n;
    cout << (binary_search(f, f + 92, n) ? "YES" : "NO") << endl;
}

int main() {
    fib();
    faster();
    tester() 
        run_test_case();
}