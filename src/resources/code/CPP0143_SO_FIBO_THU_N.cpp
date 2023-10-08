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
    f[1] = 1, f[2] = 1;
    for (int i = 3; i <= 92; i++) {
        f[i] = f[i-1] + f[i-2];
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