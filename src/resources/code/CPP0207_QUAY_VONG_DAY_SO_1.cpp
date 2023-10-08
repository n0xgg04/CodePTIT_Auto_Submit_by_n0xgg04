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
vi a;
void run_test_case() {
    cin >> n >> k;
    a.resize(n);
    for (auto &i:a) cin >> i;
    for (int i = 0; i < k; i++) a.pb(a[i]);
    for (int i = k; i < n + k; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}