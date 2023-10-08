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

int n;
vll a;
void run_test_case() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;
    vll b(n);
    b[0] = a[0] * a[1];
    b[n-1] = a[n-1] * a[n-2];

    for (int i = 1; i < n - 1; i++) {
        b[i] = a[i-1] * a[i+1];
    }
    for (auto i:b) cout << i << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}