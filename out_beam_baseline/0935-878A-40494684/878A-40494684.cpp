#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 7;
const int INF = 0x3f3f3f3f;
int N, M, K;
int prea[MAX], preb[MAX];
int cal(int a, char c, int b) 
	{ if (c == '&') return a & b;
	if (c == '|') return a | b;
	return a ^ b;
}
int main() 
	{ while (cin >> N) 
		{ int x = 0, y = 1023;
		for (int i = 0; i < N; i++) 
			{ char c;
			int a;
			cin >> c >> a;
			x = cal(x, c, a);
			y = cal(y, c, a);
		}
		int a = 0, b = 0, c = 1023;
		for (int i = 0; i < 10; i++) 
			{ int p = 1 << i;
			if (x & p) 
				{ if (y & p)
					{ a |= p;
				} else
					{ b |= p;
			} }  else 
				{ if (!(y & p)) c ^= p;
			}
		}
		cout << 3 << endl;
		cout << "| " << a << endl;
		cout << "^ " << b << endl;
		cout << "& " << c << endl ;
	}
	return 0;
}
