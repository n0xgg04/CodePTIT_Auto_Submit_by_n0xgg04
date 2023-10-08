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

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll a, b;
void run_test_case() {
    cin >> a >> b;
    if (a < b) swap(a, b);
    cout << a*b/gcd(a, b) << " " << gcd(a, b) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}