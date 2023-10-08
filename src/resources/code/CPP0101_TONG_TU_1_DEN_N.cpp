#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)

ll n;
void run_test_case() {
    cin >> n;
    cout << n*(n + 1) / 2 << endl;
}

int main() {
    tester() 
        run_test_case();
}