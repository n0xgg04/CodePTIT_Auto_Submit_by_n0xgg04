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
#define tester() int t; cin >> t; cin.ignore(); while(t--)

string s1, s2;
void run_test_case() {
    getline(cin, s1);
    getline(cin, s2);
    map<string, int> mp;
    stringstream ss1(s1);
    string token;

    while (ss1 >> token) {
        mp[token] = 1;
    }

    stringstream ss2(s2);
    while (ss2 >> token) {
        mp[token] = 0;
    }

    for (auto i:mp) {
        if (i.second == 1) cout << i.first << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}

/*
2
abc ab ab ab abcd
ab abc
aaa xyz ab zzz abc dd dd abc
xyz dd ttt sas cdc
*/