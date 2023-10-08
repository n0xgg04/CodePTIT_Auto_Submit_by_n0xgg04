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

ll n;
void run_test_case() {
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) cnt++;
        else cout << a[i] << " ";
    }
    while (cnt--) cout << 0 << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}