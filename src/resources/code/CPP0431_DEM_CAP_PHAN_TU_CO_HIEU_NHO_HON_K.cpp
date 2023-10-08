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

int n, k, a[1000000];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    stable_sort(a, a + n);

    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int tmp = lower_bound(a + i, a + n, a[i] + k) - a;
        ans += tmp - 1 - i;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}