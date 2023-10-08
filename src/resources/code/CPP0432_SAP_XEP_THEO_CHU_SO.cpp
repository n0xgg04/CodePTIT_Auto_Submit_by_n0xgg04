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

bool cmp(string a, string b) {
    if (a + b > b + a) return true;
    return false;
}

int n;
vector<string> a;
void run_test_case() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;
    sort(all(a), cmp);
    for (auto i:a) cout << i;
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}