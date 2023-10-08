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
vi a;
void run_test_case() {
    cin >> n;
    int ans = 0;
    a.resize(n);
    for (auto &i:a) {
        cin >> i;
        ans = max(ans, i);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}