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
    int m = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = min(m, a[i]);
    }

    int b = a[0] - m;
    for (int i = 1; i < n; i++) {
        b = __gcd(b, a[i] - m);
    }

    int ans = 0;
    for (int i = 1; i <= sqrt(b); i++) {
        if (b % i == 0) {
            int q = b / i;
            if (i == q) ans++;
            else ans += 2;
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}