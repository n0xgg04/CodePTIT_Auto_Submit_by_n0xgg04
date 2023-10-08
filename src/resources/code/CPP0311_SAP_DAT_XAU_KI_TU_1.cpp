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

string s;
void run_test_case() {
    cin >> s;
    int m[200] = {};
    int cnt = 0;
    for (auto i:s) {
        m[i]++;
        cnt = max(cnt, m[i]);
    }
    int len = s.size() & 1 ? s.size() + 1 : s.size();
    if (cnt > len / 2) cout << 0 << endl;
    else cout << 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}