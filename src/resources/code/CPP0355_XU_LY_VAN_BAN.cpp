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
#define MAX 1000000

int main() {
    string s;
    vector<string> v;
    while (cin >> s) {
        for (auto &i:s) {
            if (i >= 'A' && i <= 'Z') i += 32;
        }
       v.pb(s);
    }
    v[0][0] -= 32;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].back() == '.' || v[i].back() == '?' || v[i].back() == '!') {
            if (i != v.size() - 1) v[i+1][0] -= 32;
        }
    }

    for (auto i:v) {
        if (i.back() == '.' || i.back() == '?' || i.back() == '!') {
            cout << i.substr(0, i.size() - 1) << endl;
        }
        else cout << i << " ";
    }
}
