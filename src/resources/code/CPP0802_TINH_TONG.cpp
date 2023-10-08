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

int check(string s) {
    for (auto i:s) {
        if (i < '0' || i > '9') return 0;
    }
    return 1;
}

int main() {
    ifstream ip;
    ip.open("DATA.in");
    ll ans = 0;
    string s;
    while (ip >> s) {
        if (s.size() <= 9 && check(s)) {
            ans += stoll(s);
        }
    }
    cout << ans;
}