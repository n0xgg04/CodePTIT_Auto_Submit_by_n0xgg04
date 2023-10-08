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

int n;
vi a;
void run_test_case() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vi le(n, 1), ri(n, 1);
    // Dynamic:
    // Xuoi:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                le[i] = max(le[i], le[j] + 1);
            }
        }
    }

    // Nguoc:
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (a[i] > a[j]) {
                ri[i] = max(ri[i], ri[j] + 1);
            }
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans = max(ans, le[i] + ri[i] - 1);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}