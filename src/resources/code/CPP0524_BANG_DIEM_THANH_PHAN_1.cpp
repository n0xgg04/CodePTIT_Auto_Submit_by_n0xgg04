#include <bits/stdc++.h>
#include <string>
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

struct SinhVien {
	string msv, name, lop;
	float d1, d2, d3;
	int stt;
	
	void nhap() {
		cin >> msv;
		scanf("\n");
		getline(cin, name);
		cin >> lop >> d1 >> d2 >> d3;
	}
	
	void xuat() {
		cout << fixed << setprecision(1);
		cout << idx++ << " " << msv << " " << name << " " << lop << " " << d1 << " " << d2 << " " << d3 << endl;
	}
};

bool cmp(SinhVien a, SinhVien b) {
	return a.msv < b.msv;
}

void sap_xep(SinhVien a[], int n) {
	sort(a, a + n, cmp);
}

void nhap(SinhVien &a) {
	a.nhap();
}

void in_ds(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].xuat();
	}
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
