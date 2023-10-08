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

int f[10000];
void fib() {
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        f[i] = f[i-1] + f[i-2];
        f[i] %= mod;
    }
}

int n;
void run_test_case() {
    cin >> n;
    cout << f[n] << endl;
}

int main() {
    faster();
    fib();
    tester() 
        run_test_case();
}