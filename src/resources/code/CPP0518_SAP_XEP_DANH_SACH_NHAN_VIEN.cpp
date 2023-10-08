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

struct NhanVien {
	string name, gender, dob, address, mst, date, mnv;
	
	void input() {
		scanf("\n");
		getline(cin, name);
		cin >> gender >> dob;
		scanf("\n");
		getline(cin, address);
		cin >> mst >> date;
		
		dateOfBirth();
		
		stringstream ss;
		ss << idx++;
		string t;
		ss >> t;
		t.insert(0, 5 - t.size(), '0');
		mnv = t;
	}
	
	void output() {
		cout << mnv << " " << name << " " << gender << " " << dob << " " << address << " " << mst << " " << date << endl;
	}
	
	void dateOfBirth() {
		if (dob[1] == '/') dob.insert(0, "0");
		if (dob[4] == '/') dob.insert(3, "0");
	}
	
};

bool cmp(NhanVien a, NhanVien b) {
	string y1 = a.dob.substr(6);
	string y2 = b.dob.substr(6);
	string m1 = a.dob.substr(0, 2);
	string m2 = b.dob.substr(0, 2);
	string d1 = a.dob.substr(3, 2);
	string d2 = b.dob.substr(3, 2);
	
	if (y1 == y2) {
		if (m1 == m2) return d1 < d2;
		return m1 < m2;
	}
	return y1 < y2;
}

// 01/01/2000

void sapxep(NhanVien a[], int n) {
	sort(a, a + n, cmp);
}

void nhap(NhanVien &a) {
	a.input();
}

void inds(NhanVien a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].output();
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


