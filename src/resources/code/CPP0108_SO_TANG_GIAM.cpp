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

int checkPrime(ll n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int check1(ll n) {
    int tmp = 10;
    while (n) {
        if (tmp <= n % 10) return 0;
        tmp = n  % 10;
        n /= 10;
    }
    return 1;
}

int check2(ll n) {
    int tmp = -1;
    while (n) {
        if (tmp >= n % 10) return 0;
        tmp = n % 10;
        n /= 10;
    }
    return 1;
}

ll n;
void run_test_case() {
    cin >> n;
    ll low = (ll)pow(10, n - 1), high = (ll)pow(10, n);

    ll cnt = 0;
    for (ll i = low; i <= high; i++) {
        if (check1(i) || check2(i)) {
            if (checkPrime(i)) cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}