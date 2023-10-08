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
void run_test_case() {
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int q = n / i;
            if (i % 2 == 0) ans++;
            if (q % 2 == 0) ans++;
            if (i == q && i % 2 == 0) ans--;
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}