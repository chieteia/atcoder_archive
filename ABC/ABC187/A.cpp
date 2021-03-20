#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i <= (b); ++i)
#define fore(i,a) for(auto &i:a)
#define all(a) (a).begin(), (a).end()
#define def(A) A = (A > 0) ? A : -(A);
#define sum(A) accumulate(all(A), 0);
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

inline int ri() {int n;cin >> n;return n;}
inline string rs() {string s;cin >> s;return s;}

int S(string n)
{
	return((n[0] - '0') + (n[1] - '0') + (n[2] - '0'));
}

int main()
{
	string a = rs();
	string b = rs();
	cout << max(S(a), S(b)) << endl;
}