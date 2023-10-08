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

int n;
vi a;
void run_test_case() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;
    sort(all(a));
    int ans = 1000000;
    for (int i = 0; i < n - 1; i++) {
        ans = min(ans, a[i + 1] - a[i]);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}