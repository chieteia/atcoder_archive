#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i <= (b); ++i)
#define all(a) (a).begin(), (a).end()
#define def(A) A = (A > 0) ? A : -(A);
#define sum(A) accumulate(all(A), 0);
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int A,B;

int main()
{
	cin >> A >> B;
	int nyuko = A + B;
	int nyusi = B;

	if(nyuko >= 15 && nyusi >= 8) cout << "1" << endl;
	else if(nyuko >= 10 && nyusi >= 3) cout << "2" << endl;
	else if(nyuko >= 3) cout << "3" << endl;
	else cout << "4" << endl;
}