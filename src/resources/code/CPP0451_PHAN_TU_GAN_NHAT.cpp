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

int n, k, x, a[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k >> x;

    int idx = lower_bound(a, a + n, x) - a;
    int le, ri;
    if (a[idx] == x) {
        le = idx - 1;
        ri = idx + 1;
    }
    else {
        le = idx - 1;
        ri = idx;
    }

    vi ans;
    int cntLeft = k / 2, cntRight = k / 2;
    while (cntLeft--) ans.pb(a[le--]);
    while (cntRight--) ans.pb(a[ri++]);
    sort(all(ans));
    for (auto i:ans) cout << i << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}