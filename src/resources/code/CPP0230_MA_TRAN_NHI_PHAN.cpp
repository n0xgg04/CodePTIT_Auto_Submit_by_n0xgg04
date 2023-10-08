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

int n, a[1005][3];
void run_test_case() {
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int z = 0, o = 0;
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
            if (a[i][j]) o++;
            else z++;
        }
        if (o > z) ans++;
    }
    cout << ans << endl;
}

int main() {
    faster();
        run_test_case();
}