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
    ip.open("VANBAN.in");
    string s;
    set<string> a;
    while (ip >> s) {
        for (auto &i:s) {
            if (isupper(i)) i += 32;
        }
        a.insert(s);
    }
    for (auto i:a) {
        cout << i << endl;
    }
}