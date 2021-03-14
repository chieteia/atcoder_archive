#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define fore(i,a) for(auto &i:a)
#define all(a) (a).begin(), (a).end()
#define def(A) A = (A > 0) ? A : -(A);
#define sum(A) accumulate(all(A), 0);
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

inline int ri()
{
	int n;
	cin >> n;
	return n;
}

int main()
{
	int n = ri();
	vector<int> a(n);
	rep(i, n) a[i] = ri();

	map<int, int> cnt;
	rep(i, n) cnt[a[i]]++;

	ll ans = 0;
	fore(p, cnt) fore(q, cnt)
	{
		if (p.first < q.first)
			ans += 1LL * (q.first - p.first) * (q.first - p.first) * p.second * q.second;
		else
			continue;
	}
	cout << ans << endl;
}