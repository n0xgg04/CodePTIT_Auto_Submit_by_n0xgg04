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

int n, a[1000000];
int m[1000000] = {0};
void run_test_case() {
    cin >> n;
    int ans = 0;
    memset(m, 0, sizeof(m));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
        if (m[a[i]] == 2) ans += 2;
        else if (m[a[i]] > 2) ans++;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}