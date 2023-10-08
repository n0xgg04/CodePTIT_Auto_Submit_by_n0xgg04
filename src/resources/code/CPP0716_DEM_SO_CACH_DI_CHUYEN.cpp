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
int a[100][100];
int curr, ans;
void init() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    curr = 0, ans = 0;
}

void dfs(int i, int j) {
    if (i == n || j == n) return;
    curr += a[i][j];
    if (curr == k && i == n-1 && j == n-1) ans++;
    else if (curr <= k) {
        dfs(i+1, j);
        dfs(i, j+1);
    }
    curr -= a[i][j];
}

void run_test_case() {
    init();
    dfs(0, 0);
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}