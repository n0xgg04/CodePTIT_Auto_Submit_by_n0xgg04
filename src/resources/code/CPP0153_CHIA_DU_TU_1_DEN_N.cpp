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

ll n, k;
void run_test_case() {
    cin >> n >> k;
    ll h=n/k;
    h=(k-1)*k*h/2;
    n%=k;
    h+=(n+1)*n/2;
    cout << h << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}