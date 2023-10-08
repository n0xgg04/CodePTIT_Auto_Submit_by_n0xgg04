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
    int sum = 0, tmp = n;
    for (int i = 2; i <= sqrt(tmp); i++) {
        int cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt > 1) {
            cout << 0 << endl;
            return;
        }
        if (cnt == 1) sum++;
    }
    if (sum == 3) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}