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
};

void nhap(PhanSo &a) {
    cin >> a.tu >> a.mau;
}

ll bcnn(ll a, ll b) {
    return a * b / __gcd(a, b);
}

void rutgon(PhanSo &a) {
    ll x = __gcd(a.tu, a.mau);
    a.tu /= x;
    a.mau /= x;
}

PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo c;
    ll k = bcnn(a.mau, b.mau);
    c.mau = k;
    c.tu = a.tu * (k/a.mau) + b.tu * (k/b.mau);
    rutgon(c);
    return c;
}

void in(PhanSo a) {
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}