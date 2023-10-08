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

int n, a[MAX], b[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    ll s = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            sum1 += a[i]*b[0];
            sum2 += b[i]*a[0];
        }
        else {
            sum1 += a[i]*b[i+1];
            sum2 += b[i]*a[i+1];
        }
    }
    s = sum1 - sum2;
    db ans = s*1.0 / 2;
    cout << fixed << setprecision(3) << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}