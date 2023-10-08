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

string hieu(string a, string b) {
    int n = a.size(), m = b.size();
    if (n < m) a.insert(0, m - n, '0');
    else if (n > m) b.insert(0, n - m, '0');
    
    if (a < b) swap(a, b);
    string ans = "";
    int tmp = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        tmp = a[i] - b[i] - tmp;

        if (tmp < 0) {
            tmp += 10;
            ans.pb(tmp + '0');
            tmp = 1;
        }
        else {
            ans.pb(tmp + '0');
            tmp = 0;
        }
    }
    reverse(all(ans));
    return ans;
}

string a, b;
void run_test_case() {
    cin >> a >> b;
    cout << hieu(a, b) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}