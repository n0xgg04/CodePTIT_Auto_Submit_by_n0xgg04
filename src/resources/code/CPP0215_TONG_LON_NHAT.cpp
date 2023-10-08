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

int n, m, a[10000], b[10000];
void run_test_case() {
    cin >> n >> m;
    int aRight = 0, bRight = 0, aLeft = 0, bLeft = 0, left = 0, right = 0, maxCurr = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        aRight += a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        bRight += b[i];
    }

    n = min(n, m);
    for (int i = 0; i < n; i++) {
        aLeft += a[i];
        aRight -= a[i];
        bLeft += b[i];
        bRight -= b[i];

        left = max(aLeft, bLeft);
        right = max(aRight, bRight);
        maxCurr = left + right;
        ans = max(ans, maxCurr);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}