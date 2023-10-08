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

int n, p, l;
ll a[1000005], b[1000005], c[1000005];
void run_test_case() {
    cin >> n >> p >> l;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < p; i++) cin >> b[i];
    for (int i = 0; i < l; i++) cin >> c[i];
    int i = 0, j = 0, k = 0;
    vll ans;
    while (i < n && j < p && k < l) {
        if (a[i] == b[j] && b[j] == c[k]) {
            ans.pb(a[i]);
            i++; j++; k++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[k]) j++;
        else k++;
    }

    if (ans.size() == 0) {
        cout << -1 << endl;
        return;
    }
    sort(all(ans));
    for (auto e:ans) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    tester() 
        run_test_case();
}