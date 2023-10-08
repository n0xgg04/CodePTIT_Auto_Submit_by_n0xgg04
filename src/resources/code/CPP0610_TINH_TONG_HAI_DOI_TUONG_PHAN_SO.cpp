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

ll bcnn(ll a, ll b) {
	return a*b / __gcd(a, b);
}

class PhanSo {
	friend istream &operator>>(istream &input, PhanSo &a) {
		input >> a.tu >> a.mau;
		return input;
	}

	friend ostream &operator<<(ostream &output, PhanSo a) {
		output << a.tu << "/" << a.mau;
		return output;
	}

	friend PhanSo operator+(PhanSo a, PhanSo b) {
		PhanSo c(1,1);
		ll k = bcnn(a.mau, b.mau);
		c.mau = k;
		c.tu = a.tu*(k/a.mau) + b.tu*(k/b.mau);
		c.rutgon();
		return c;
	}

public:
	ll tu, mau;
	PhanSo();
	PhanSo(ll tu, ll mau) {
		this->tu = tu;
		this->mau = mau;
	}

	void rutgon() {
		ll x = __gcd(tu, mau);
		tu /= x;
		mau /= x;
	}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
