#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct ThiSinh {
	string name, dob;
	db sub1, sub2, sub3, tong;
};

void nhap(struct ThiSinh &a) {
	getline(cin, a.name);
	getline(cin, a.dob);
	cin >> a.sub1 >> a.sub2 >> a.sub3;
	a.tong = a.sub1 + a.sub2 + a.sub3;
}

void in(struct ThiSinh a) {
	cout << a.name << " " << a.dob << " " << fixed << setprecision(1) << a.tong;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

