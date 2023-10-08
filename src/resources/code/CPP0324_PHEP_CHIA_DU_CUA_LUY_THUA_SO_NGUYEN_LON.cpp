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

ll chiadu(string a, ll b) {
    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans = (ans * 10 + a[i] - '0') % b;
    }
    return ans;
}

ll mu(ll a, ll b, ll m) {
    if (b == 0) return 1;
    ll v = mu(a, b / 2, m) % m;
    if (b & 1) return a * v % m * v % m;
    return v * v % m;
}

string a;
ll b, m;
void run_test_case() {
    cin >> a >> b >> m;
    ll du = chiadu(a, m);
    cout << mu(du, b, m) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}