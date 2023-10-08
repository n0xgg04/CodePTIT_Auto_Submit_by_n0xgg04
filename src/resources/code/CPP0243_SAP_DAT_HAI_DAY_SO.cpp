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

int n, m, a[MAX], b[MAX];
void run_test_case() {
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        for (int j = 0; j < mp[b[i]]; j++) {
            cout << b[i] << " ";
        }
        mp[b[i]] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > 0) cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}