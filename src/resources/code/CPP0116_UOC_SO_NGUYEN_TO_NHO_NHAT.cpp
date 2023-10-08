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

int dp[100005] = {};
void dynamic() {
    dp[1] = 1;
    for (int i = 2; i <= 100; i++) {
        if (dp[i] == 0) {
            dp[i] = i;
            for (int j = i*i; j <= 10000; j += i) {
                if (dp[j] == 0) dp[j] = i;
                // else dp[j] = min(dp[j], i);
            }
        }
        
    }
}

int n;
void run_test_case() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (dp[i] > 0) cout << dp[i] << " ";
        else cout << i << " ";
    }
    cout << endl;
}

int main() {
    dynamic();
    faster();
    tester() 
        run_test_case();
}