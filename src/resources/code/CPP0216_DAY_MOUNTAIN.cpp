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

int n, a[1000000], r, l;
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> l >> r;
    
    int s = l, t = r;
    while (a[s] < a[s + 1] && s < r) s++;
    while (a[t] < a[t - 1] && t > l) t--;

    cout << (s == t ? "Yes" : "No") << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}