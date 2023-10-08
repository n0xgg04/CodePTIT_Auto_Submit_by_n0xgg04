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

int n, m, a[1000000], b[1000000];
void run_test_case() {
    cin >> n >> m;
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
        mp[a[i]] = 1;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        s.insert(b[i]);
        if (mp[b[i]] == 1) mp[b[i]] = 2;
    }
    for (auto i:s) cout << i << " ";
    cout << endl;
    for (auto i:mp) {
        if (i.second == 2) cout << i.first << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}