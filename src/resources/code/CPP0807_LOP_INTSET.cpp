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

int main() {
    ifstream ip;
    ip.open("DATA.in");
    int n, m, a;
    map<int, int> mp;
    ip >> n >> m;
    for (int i = 0; i < n; i++) {
        ip >> a;
        mp[a] = 1;
    }
    for (int i = 0; i < m; i++) {
        ip >> a;
        if (mp[a] == 1) mp[a] = 2;
    }
    for (auto i:mp) {
        if (i.second == 2) cout << i.first << " ";
    }
}