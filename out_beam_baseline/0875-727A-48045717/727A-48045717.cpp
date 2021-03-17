#include <bits/stdc++.h>

using namespace std;

stack<int> S;
int funcion(long long a, long long b) 
	{ int r;
	if (a == b) return 1;
	if (a < b) 
		{ r = funcion(2 * a, b);
		if (r == 1) 
			{ S.push(1);
			return 1;
		}
		r = funcion((10 * a) + 1, b);
		if (r == 1) 
			{ S.push(2);
			return 1;
		}
	}  else
		{ return 0;
} }
int main() 
	{ long long a, b;
	int op, ans;
	cin >> a >> b;
	ans = funcion(a, b);
	if (ans == 0)
		{ cout << "NO" << '\n';
	} else 
		{ cout << "YES" << '\n';
		cout << S.size() + 1 << '\n';
		cout << a;
		while (!S.empty()) 
			{ op = S.top();
			S.pop();
			if (op == 1) 
				{ a *= 2;
			}  else 
				{ a *= 10;
				a++;
			}
			cout << " " << a;
		}
		cout <<'\n';
	}
}
