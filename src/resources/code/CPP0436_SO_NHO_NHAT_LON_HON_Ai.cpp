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
    vi b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.pb(a[i]);
    }
    b.pb(INT_MAX);
    sort(all(b));

    for (int i = 0; i < n; i++) {
        int idx = upper_bound(all(b), a[i]) - b.begin();
        if (idx == n) cout << "_ ";
        else cout << b[idx] << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}