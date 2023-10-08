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

ll dp[6000] = {};
void catalan() {
    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i < 6000; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i-j-1];
            dp[i] %= mod;
        }
    }
}

int n;
void run_test_case() {
    cin >> n;
    cout << dp[n+1] << endl;
}

int main() {
    catalan();
    faster();
        run_test_case();
}