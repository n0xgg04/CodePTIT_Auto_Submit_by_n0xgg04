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

vector<vector<ll>> C(1005, vector<ll>(1005, 1));

void tohop() {
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] *= (C[i-1][j] + C[i-1][j-1]) % mod;
            C[i][j] %= mod;
        }
    }
}

int n, k;
void run_test_case() {
    cin >> n >> k;
    cout << C[n][k] << endl;
}

int main() {
    tohop();
    faster();
    tester() 
        run_test_case();
}