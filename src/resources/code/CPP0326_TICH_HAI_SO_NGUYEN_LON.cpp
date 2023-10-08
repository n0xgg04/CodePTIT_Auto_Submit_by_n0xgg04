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

string cong(string a, string b) {
    string ans;
    int n = a.size(), m = b.size();
    if (n > m) b.insert(0, n - m, '0');
    else a.insert(0, m - n, '0');

    int tmp = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        tmp += a[i] + b[i] - 2 * '0';
        ans.insert(0, 1, tmp%10 + '0');
        tmp /= 10;
    }
    if (tmp) ans.insert(0, 1, tmp + '0');
    return ans;
}

string buoc(string a, char b) {
    string s;

    int tmp = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        tmp += (a[i] - '0') * (b - '0'); 
        s.insert(0, 1, tmp % 10 + '0');
        tmp /= 10;
    }
    if (tmp) s.insert(0, 1, tmp + '0');
    return s;
}

string nhan(string a, string b) {
    string ans;
    int len = b.size();
    
    for (int i = len - 1; i >= 0; i--) {
        string tmp = buoc(a, b[i]);
        tmp.insert(tmp.size(), len - i - 1, '0');
        ans = cong(ans, tmp);
    }
    return ans;
}

string a, b;
void run_test_case() {
    cin >> a >> b;
    cout << nhan(a, b) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}