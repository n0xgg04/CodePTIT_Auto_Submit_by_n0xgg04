#include <bits/stdc++.h>
#include <sstream>
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

void cach1(vector<string> v) {
	cout << v.back() << " ";
	for (int i = 0; i < v.size() - 1; i++) {
		if (i != v.size() - 2) cout << v[i] << " ";
		else cout << v[i];
	}
	cout << endl;
}

void cach2(vector<string> v) {
	for (int i= 1; i < v.size(); i++) {
		cout << v[i] << " "; 
	}
	cout << v[0] << endl;
}

int n;
string s;
void run_test_case() {
	cin >> n;
	cin.ignore();
	getline(cin, s);
	for (auto &i:s) {
		if (i >= 'A' && i <= 'Z') i += 32;
	}
	stringstream ss(s);
	string token;
	vector<string> v;
	while (ss >> token) {
		token[0] -= 32;
		v.pb(token);
	}
	if (n == 1) cach1(v);
	else cach2(v);
}

int main() {
    faster();
    tester() 
        run_test_case();
}

