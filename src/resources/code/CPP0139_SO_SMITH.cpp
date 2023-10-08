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

int checksnt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int sumdigit(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int n;
void run_test_case() {
    cin >> n;
    int cnt1 = 0, cnt2 = 0, tmp = n;
    cnt1 = sumdigit(tmp);
    for (int i = 2; i <= sqrt(tmp); i++) {
        while (n % i == 0) {
            n /= i;
            cnt2 += sumdigit(i);
        }
    }
    if (n >= 2) cnt2 += sumdigit(n);

    if (cnt1 == cnt2 && !checksnt(tmp)) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}