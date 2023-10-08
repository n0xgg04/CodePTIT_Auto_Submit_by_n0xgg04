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

ll n, a;
void run_test_case() {
    cin >> n;
    map<ll, int> mp;
    ll tmp = n;
    while (n--) {
        cin >> a;
        mp[a] = 1;
    }
    for (int i = 0; i < tmp; i++) {
        if (mp[i] > 0) cout << i << " ";
        else cout << -1 << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}