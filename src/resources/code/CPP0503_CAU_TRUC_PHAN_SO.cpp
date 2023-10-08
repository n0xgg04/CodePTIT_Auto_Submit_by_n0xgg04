#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct PhanSo {
	ll tu, mau;
};

void nhap(struct PhanSo &p) {
	cin >> p.tu >> p.mau;
}

void rutgon(struct PhanSo &p) {
	ll k = __gcd(p.tu, p.mau);
	p.tu /= k;
	p.mau /= k;
}

void in(struct PhanSo p) {
	cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

