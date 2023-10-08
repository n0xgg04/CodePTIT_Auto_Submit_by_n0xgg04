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

int n, m[10000000];
vi a;
void run_test_case() {
    memset(m, 0, sizeof(m));
    cin >> n;
    a.resize(n);
    for (auto &i:a) {
        cin >> i;
        if (i >= 0) m[i] = 1;
    }
    for (int i = 1; i <= 1000000; i++) {
        if (m[i] == 0) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}