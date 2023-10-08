#include <bits/stdc++.h>
#include <iomanip>
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

class SinhVien{
public:
	SinhVien() {
		name = "";
		dob = "";
		lop = "";
		gpa = 0;
	}
	string name, msv = "B20DCCN001 ", dob, lop;
	float gpa;

	void standardDob() {
		if (dob[1] == '/') dob.insert(0, "0");
		if (dob[4] == '/') dob.insert(3, "0");
	}

	void nhap() {
		getline(cin, name);
		getline(cin, lop);
		getline(cin, dob);
		standardDob();
		cin >> gpa;
	}

	void xuat() {
		cout << msv << name << " " << lop << " " << dob << " ";
		printf("%.2f", gpa);
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
