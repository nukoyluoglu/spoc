#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a, b, rub = 0;
	cin >> n >> m >> a >> b;
	while (n > 0) 
		{ if (n < m) 
			{ int flag = n * a;
			if (flag < b) 
				{ rub += flag;
				n = 0;
			}  else 
				{ rub += b;
				n -= m;
			}
		}  else if ((a * m) > b) 
			{ n -= m;
			rub += b;
		}  else 
			{ rub += n * a;
			n = 0;
		}
	}
	cout << rub << "\n" ;

}
