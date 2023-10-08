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

int n, k, b, a;
void run_test_case() {
    cin >> n >> k >> b;
    int m[1000000];
    for (int i = 0; i < b; i++) {
        cin >> a;
        m[a]++;
    }
    int cnt = 0;
    for (int i = 1; i <= k; i++) {
        if (m[i] > 0) cnt++;
    }
    int ans = cnt;
    for (int i = 2; i <= n - k + 1; i++) {
        if (m[i-1] > 0) cnt--;
        if (m[i + k - 1] > 0) cnt++;
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}

int main() {
    faster();
        run_test_case();
}