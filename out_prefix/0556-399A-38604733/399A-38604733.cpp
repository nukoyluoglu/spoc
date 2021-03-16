#include <bits/stdc++.h>

using namespace std;

queue<int> q;
bool p[10000] = {};
int pe;
void print(int c, int a, int b) 
	{ if (a < c || a > b || p[a] || a > pe || a < 1) return;
	p[a] = true;
	print(c, a - 1, b);
	q.push(a);
	print(c, a + 1, b);
}
int main() 
	{ int n, k;
	cin >> pe >> n >> k;
	if (n - k > 1) { cout << "<< "; }
	print(n - k, n, n + k);
	while (!q.empty()) 
		{ if (q.size() != 1 && q.front() != n)
			{ cout << q.front() << " ";
		} else if (q.front() == n) 
			{ cout << "(" << q.front();
			if (q.size() != 1) 
				{ cout << ") ";
			}  else
				{ cout << ")";
		} }  else
			{ cout << q.front();
		} q.pop();
	}
	if (n + k < pe) { cout << " >>"; }
	cout << endl ;

}
