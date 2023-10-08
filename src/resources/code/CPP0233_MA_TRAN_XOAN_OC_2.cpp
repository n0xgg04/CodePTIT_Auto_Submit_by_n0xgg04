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

int n, m, a[1000][1000];
void run_test_case() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vi b;
    int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
    while (h1 <= h2 && c1 <= c2) {
        for (int i = c1; i <= c2; i++) b.pb(a[h1][i]);
        h1++;
        for (int i = h1; i <= h2; i++) b.pb(a[i][c2]);
        c2--;
        for (int i = c2; i >= c1; i--) b.pb(a[h2][i]);
        h2--;
        for (int i = h2; i >= h1; i--) b.pb(a[i][c1]);
        c1++;
    }

    vi ans;
    for (int i = 0; i < n*m; i++) ans.pb(b[i]);
    reverse(all(ans));
    for (int i = 0; i < n*m; i++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}