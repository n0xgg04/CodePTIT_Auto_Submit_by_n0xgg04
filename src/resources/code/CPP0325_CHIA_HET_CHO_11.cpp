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
    int o = 0, e = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i&1) o += s[i] - '0';
        else e += s[i] - '0';
    }
    if (abs(o - e) % 11 == 0) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}