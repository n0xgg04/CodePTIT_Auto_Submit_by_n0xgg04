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

    ll ans = 0;
    while (1) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] & 1) {
                ans++;
                a[i]--;
            }
            if (a[i] == 0) cnt++;
        }
        if (cnt == n) break;
        for (int i = 0; i < n; i++) a[i] /= 2;
        ans++;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}