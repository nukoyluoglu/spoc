#include <bits/stdc++.h>

using namespace std;

int co, cx;
const long long inf = -1e16;
inline long long gox(int num) 
	{ if (num > cx) return inf;
	int ex = cx % num;
	int anch = cx / num;
	long long ans = 1LL * (anch + 1) * (anch + 1) * ex;
	ans += 1LL * anch * anch * (num - ex);
	return -ans;
}
inline long long goo(int num) 
	{ if (num > co) return inf;
	int juntos = co - num + 1;
	long long ans = 1LL * juntos * juntos;
	ans += num - 1;
	return ans;
}
inline void build(int x, int o) 
	{ string s;
	int xx = cx / x;
	bool flag = (x > o);
	bool fst = true;
	int ex = cx % x;
	int prim = co - o + 1;
	while (x || o) 
		{ if (flag) 
			{ for (int i = int(0); i < int(xx); ++i) s.push_back('x');
			if (ex > 0) s.push_back('x'), ex--;
			x--;
		}  else 
			{ if (fst) 
				{ for (int i = int(0); i < int(prim); ++i) s.push_back('o');
				fst = false;
			}  else
				{ s.push_back('o');
			} o--;
		}
		flag = (!flag);
	}
	cout << s << endl;
}
int main() 
	{ cin >> co >> cx;
	if (co == 0 || cx == 0) 
		{ if (co > 0) 
			{ cout << 1LL * co * co << endl;
			for (int i = int(0); i < int(co); ++i) cout << 'o';
			cout << endl;
		}
		if (cx > 0) 
			{ cout << -1LL * cx * cx << endl;
			for (int i = int(0); i < int(cx); ++i) cout << 'x';
			cout << endl;
		}
		return 0;
	}
	int lim = min(co, cx);
	long long ans = LLONG_MIN;
	pair<int, int> pos;
	for (int i = int(1); i < int(lim + 1); ++i) 
		{ if (ans < gox(i) + goo(i)) 
			{ ans = gox(i) + goo(i);
			pos = {i, i};
		}
	}
	for (int i = int(2); i < int(cx + 1); ++i) 
		{ if (ans < gox(i) + goo(i - 1)) 
			{ ans = gox(i) + goo(i - 1);
			pos = {i, i - 1};
		}
	}
	for (int i = int(2); i < int(co + 1); ++i) 
		{ if (ans < gox(i - 1) + goo(i)) 
			{ ans = gox(i - 1) + goo(i);
			pos = {i - 1, i};
		}
	}
	cout << ans << endl;
	build ( pos. first, pos. second ) ;

	return 0;
}
