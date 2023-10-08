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

int a, m;
void run_test_case() {
    cin >> a >> m;
    for (int i = 0; i < m; i++) {
        if (a*i % m == 1) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}