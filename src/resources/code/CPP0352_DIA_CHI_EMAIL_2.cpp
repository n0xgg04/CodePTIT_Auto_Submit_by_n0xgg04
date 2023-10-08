#include <bits/stdc++.h>
#include <cctype>
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


int main() {
	int n;
	cin >> n;
	cin.ignore();
	map<string, int> mp;
	string s;
	while (n--) {
		getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> v;
		while (ss >> token) {
			for (auto &i:token) {
				if (i >= 'A' && i <= 'Z') {
					i += 32;
				}
			}
			v.pb(token);	
		}
		string ans;
		for (int i = 0; i < v.size() - 1; i++) {
			ans.pb(v[i][0]);
		}
		ans = v.back() + ans;
		mp[ans]++;
		if (mp[ans] == 1) {
			cout << ans << "@ptit.edu.vn" << endl;
		}
		else cout << ans << mp[ans] << "@ptit.edu.vn" << endl;
	}
}

