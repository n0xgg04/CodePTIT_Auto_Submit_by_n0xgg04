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

int n, k;
void run_test_case() {
    cin >> n >> k;
    int sum = n*(n - 1) / 2;
    int m = n / k, r = n % k;
    int ans = (m * sum) + (r*(r + 1) / 2);
    cout << (ans == k) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}