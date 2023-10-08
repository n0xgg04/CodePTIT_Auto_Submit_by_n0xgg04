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

string s;
void run_test_case() {
    cin >> s;
    multiset<char> ss;
    int sum = 0;
    for (auto i:s) {
        if (!isdigit(i)) ss.insert(i);
        else sum += i - '0';
    }
    for (auto i:ss) cout << i;
    cout << sum << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}