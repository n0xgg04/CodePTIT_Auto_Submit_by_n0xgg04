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

ll n, m;
void run_test_case() {
    cin >> n >> m;
    vll a;
    int tmp;
    for (int i = 0; i < n + m; i++) {
        cin >> tmp;
        a.pb(tmp);
    }
    sort(all(a));
    for (auto i:a) cout << i << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}