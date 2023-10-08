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

int checkPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int n;
void run_test_case() {
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (__gcd(i, n) == 1) cnt++;
    }
    if (checkPrime(cnt)) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}