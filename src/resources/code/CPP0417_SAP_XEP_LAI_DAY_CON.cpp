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

int n, a[1000005], b[1000005];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int l = 0, r = n - 1;
    while (a[l] == b[l]) l++;
    while (a[r] == b[r]) r--;
    cout << l + 1 << " " << r + 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}