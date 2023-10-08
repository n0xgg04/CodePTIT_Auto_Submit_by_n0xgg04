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

void solve(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    if (sum < 10) cout << sum << endl;
    else solve(sum);
}

int n;
void run_test_case() {
    cin >> n;
    solve(n);
}

int main() {
    faster();
    tester() 
        run_test_case();
}