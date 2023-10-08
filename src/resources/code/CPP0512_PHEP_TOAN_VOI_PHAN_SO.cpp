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

struct PhanSo {
    ll tu, mau;

    void rutgon() {
        ll k = __gcd(tu, mau);
        tu /= k;
        mau /= k;
    }
};

ll bcnn (ll a, ll b) {
    return a * b / __gcd(a, b);
}

PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo c;
    ll k = bcnn(a.mau, b.mau);
    c.mau = k;
    c.tu = a.tu*(k/a.mau) + b.tu*(k/b.mau);
    c.rutgon();
    return c;
}

PhanSo nhan(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    c.rutgon();
    return c;
}

void process(PhanSo a, PhanSo b) {
    PhanSo c = tong(a, b);
    c = nhan(c, c);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d = nhan(a, nhan(b, c));
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}