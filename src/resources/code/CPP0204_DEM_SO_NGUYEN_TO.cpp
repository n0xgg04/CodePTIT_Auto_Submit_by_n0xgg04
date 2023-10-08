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

int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int dp[1000000];
void dynamic() {
    dp[0] = 0, dp[1] = 0;
    for (int i = 2; i <= 100000; i++) {
        if (check(i)) dp[i] = dp[i-1] + 1;
        else dp[i] = dp[i-1];
    }
}

int r, l;
void run_test_case() {
    cin >> l >> r;
    cout << dp[r] - dp[l] + check(l) << endl;
}

int main() {
    dynamic();
    faster();
    tester() 
        run_test_case();
}