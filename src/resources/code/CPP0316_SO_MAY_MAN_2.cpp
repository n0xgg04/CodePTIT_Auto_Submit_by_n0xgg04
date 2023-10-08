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

ll solve(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    if (sum < 10) return sum;
    return solve(sum);
}

string s;
void run_test_case() {
    cin >> s;
    ll n = 0;
    for (auto i:s) n += i - '0';
    ll ans = solve(n);
    if (ans == 9) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}