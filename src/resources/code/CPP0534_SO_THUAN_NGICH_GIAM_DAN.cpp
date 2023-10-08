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

int checkPal(string s) {
    if (s.size() == 1) return 0;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) return 0;
    }
    return 1;
}

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.first.size() == b.first.size()) {
        for (int i = 0; i < a.first.size(); i++) {
            if (a.first[i] > b.first[i]) return true;
        }
    }
    return a.first.size() > b.first.size();
}

int main() {
    map<string, int> mp;
    string s;
    while (cin >> s) {
        if (checkPal(s)) mp[s]++;
    }
    
    vector<pair<string, int>> ans;
    for (auto i:mp) ans.push_back(i);
    sort(all(ans), cmp);
    for (auto i:ans) cout << i.first << " " << i.second << endl;
}