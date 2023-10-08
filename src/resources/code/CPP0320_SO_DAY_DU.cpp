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
    set<int> se;
    if (s[0] == '0') {
        cout << "INVALID" << endl;
        return;
    }
    for (auto i:s) {
        if (i < '0' || i > '9') {
            cout << "INVALID" << endl;
            return;
        }
        se.insert(i - '0');
    }
    if (se.size() == 10) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}