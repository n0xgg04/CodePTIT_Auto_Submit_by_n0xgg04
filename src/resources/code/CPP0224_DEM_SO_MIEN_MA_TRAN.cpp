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

int n, m, a[105][105], vs[105][105];
int row[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void dfs(int i, int j) {
    if (i < 0 || j < 0 || i == n || j == m) return;
    if (a[i][j] == 0) return;
    if (vs[i][j]) return;
    vs[i][j] = 1;
    for (int k = 0; k < 8; k++) {
        dfs(i + row[k], j + col[k]);
    }
}

void run_test_case() {
    cin >> n >> m;
    memset(vs, 0, sizeof(vs));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1 && vs[i][j] == 0) {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}