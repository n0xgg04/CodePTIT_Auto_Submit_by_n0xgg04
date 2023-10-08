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

int n, q;
vi a;
void run_test_case() {
    cin >> n >> q;
    a.resize(n);
    vll s; 
    ll sum = 0;
    for (auto &i:a) {
        cin >> i;
        sum += i;
        s.pb(sum);
    }
    int l, r;
    while (q--) {
        cin >> l >> r;
        cout << s[r-1] - s[l-1] + a[l-1] << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}