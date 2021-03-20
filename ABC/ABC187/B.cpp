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

int main()
{
	int n = ri();
	vector<P> pos(n);
	rep(i,n)
	{
		pos[i].first = ri();
		pos[i].second = ri();
	}

	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			auto [x1, y1] = pos[i];
			auto [x2, y2] = pos[j];
			if (abs(y1 - y2) <= abs(x1 - x2)) cnt++;
		}
	}
	cout << cnt << endl;
}