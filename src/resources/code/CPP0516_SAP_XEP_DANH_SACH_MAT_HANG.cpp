#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define MAX 1000000
const long long mod = 1e9 + 7;
#define all(x) x.begin(), x.end()

int idx = 1;

struct data {
	string name, type;
	float mua, ban, lai;
	int id;
	
	void calc() {
		lai = ban - mua;
	}
	
	void nhap() {
		scanf("\n");
		getline(cin, name);
		getline(cin, type);
		cin >> mua >> ban;
		calc();
		id = idx++;
	}
	
	void xuat() {
		cout << id << " " << name << " " << type << " ";
		cout << fixed << setprecision(2);
		cout << lai << endl;
	}
};

bool cmp(data a, data b) {
	return a.lai > b.lai;
}

void sapxep(data a[], int n) {
	sort(a, a + n, cmp);
}

int main() {
	data ds[2000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) ds[i].nhap();
	sapxep(ds, n);
	for (int i = 0; i < n; i++) ds[i].xuat();
	return 0;
}
