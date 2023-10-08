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
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string token;
    while (ss >> token) {
        v.pb(token);
    }
    int len = v.size();
    vector<string> ans;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (isupper(v[i][j])) v[i][j] += 32;
        }
        v[i][0] -= 32;
        ans.pb(v[i]);
    }
    for (int i = 0; i < v[len - 1].size(); i++) {
        if (islower(v[len - 1][i])) v[len - 1][i] -= 32;
    }
    ans.pb(v[len - 1]);
    for (int i = 0; i < ans.size() - 1; i++) {
        if (i != ans.size() - 2) cout << ans[i] << " ";
        else cout << ans[i];
    }
    cout << ", " << ans.back();
}

int main() {
    faster();
        run_test_case();
}