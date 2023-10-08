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
    map<int, int> mp;
    int tmp;
    vi a;
    while (cin >> tmp) {
        mp[tmp]++;
        a.pb(tmp);
    }
    for (int i = 0; i < a.size(); i++) {
        if (mp[a[i]] > 0) {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = -1;
        }
    }
}