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

int f[1000005] = {0};
vll p;
void sang() {
    f[0] = 1; f[1] = 1;
    for (ll i = 2; i <= 1000000; i++) {
        if (f[i] == 0) {
            p.pb(i);
            for (ll j = i*i; j <= 1000000; j += i) {
                f[j] = 1;
            }
        }
    }
}

ll l, r;
void run_test_case() {
    cin >> l >> r;
    l = (ll)sqrt(l);
    r = (ll)sqrt(r);
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        if (binary_search(all(p), i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    faster();
    sang();
    tester() 
        run_test_case();
}