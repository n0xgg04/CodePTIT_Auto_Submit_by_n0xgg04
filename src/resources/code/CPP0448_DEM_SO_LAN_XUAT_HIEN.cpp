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

int n, x, a[1000000];
void run_test_case() {
    cin >> n >> x;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == x) ans++; 
    }
    if (ans == 0) cout << -1 << endl;
    else cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}