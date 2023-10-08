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

ll n, m;
void run_test_case() {
    cin >> n >> m;
    ll sum = n*(n+1) / 2;
    ll a = (sum + m) / 2; // Tim hai so biet tong hieu
    ll b = sum - a;

    if (abs(a - b) != m || __gcd(a, b) != 1) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}