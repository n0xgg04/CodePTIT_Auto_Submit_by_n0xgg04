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

int f[1000010] = {0};
void sangnguyento() {
    f[0] = 1; f[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        if (f[i] == 0) {
            for (int j = i*i; j <= 1000000; j+= i) {
                f[j] = 1;
            }
        }
    }
}

int n;
void run_test_case() {
    cin >> n;
    if (n&1) {
        if (f[n - 2] == 0) {
            cout << 2 << " " << n - 2 << endl;
            return;
        }
        cout << -1 << endl;
        return;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (f[i] == 0 && f[n - i] == 0) {
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    faster();
    sangnguyento();
    tester() 
        run_test_case();
}