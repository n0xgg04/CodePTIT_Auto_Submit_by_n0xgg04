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

int n, a[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    vi dp(n, 1e9);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] == 0) continue;
            if (a[j] + j >= i) {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    // for (int i = 0; i < n; i++) cout << dp[i] << " ";
    // cout << endl;
    cout << dp[n-1] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}