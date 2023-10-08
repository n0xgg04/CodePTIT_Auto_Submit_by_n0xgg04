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

ll n, a[MAX];
vll dp;
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    dp.resize(n);
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-2] + a[i], dp[i-1]);
    }
    cout << dp[n-1] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}