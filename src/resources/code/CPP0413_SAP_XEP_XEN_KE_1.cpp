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

int n, a[100000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    vector<int> ans;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (i != j) {
            ans.pb(a[j]);
            ans.pb(a[i]);
        }
        else ans.pb(a[i]);
        i++; j--;
    }
    for (auto e:ans) cout << e << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}