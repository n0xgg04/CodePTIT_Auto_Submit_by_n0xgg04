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
    stringstream ss(s);
    string token;
    vector<string> v;
    while (ss >> token) {
        v.pb(token);
    }
    string ans;
    for (int i = 0; i < v.size() - 1; i++) {
        if (isupper(v[i][0])) v[i][0] += 32;
        ans.pb(v[i][0]);
    }
    for (int i = 0; i < v[v.size() - 1].size(); i++) {
        if (isupper(v[v.size() - 1][i])) v[v.size() - 1][i] += 32;
    }
    cout << v[v.size() - 1];
    cout << ans;
    cout << "@ptit.edu.vn";
}

int main() {
    faster();
        run_test_case();
}