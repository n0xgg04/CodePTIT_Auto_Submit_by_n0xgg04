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

int n, k;
void run_test_case() {
    cin >> n >> k;
    int a[n + 5];
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= k) s++;
    }
    int cnt = 0;
    for (int i = 0; i < s; i++) {
        if (a[i] > k) cnt++;
    }
    int ans = cnt;
    for (int i = 0; i < n - s; i++) {
        if (a[i] > k) cnt--; 
        if (a[i + s] > k) cnt++;
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}