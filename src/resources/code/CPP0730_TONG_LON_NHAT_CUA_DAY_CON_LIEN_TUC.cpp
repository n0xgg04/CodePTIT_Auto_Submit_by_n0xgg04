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

ll n, a;
void run_test_case() {
    cin >> n;
    ll sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        ans = max(ans, sum);
        sum = max(sum, (ll)0);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}