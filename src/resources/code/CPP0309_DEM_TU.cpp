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
    int ans = 1;
    getline(cin, s);
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == ' ' || s[i - 1] == '\t') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() {
        cin.ignore();
        run_test_case();
    }
}