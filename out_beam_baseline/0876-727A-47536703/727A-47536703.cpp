#include <bits/stdc++.h>

using namespace std;

int ASS[50];
int sum;
bool flag;
int digui(int a, int b) 
	{ if (a < b) 
		{ flag = 1;
		return 0;
	}
	if (a == b) return 0;
	if (a % 2 == 0) 
		{ sum++;
		ASS[sum - 1] = a / 2;
		return digui(a / 2, b);
	}  else if (a % 10 == 1) 
		{ sum++;
		ASS[sum - 1] = (a - 1) / 10;
		return digui((a - 1) / 10, b);
	}  else
		{ flag = 1;
} }
int main() 
	{ int m, n;
	cin >> m >> n;
	digui(n, m);
	if (flag == 0) 
		{ cout << "YES" << endl << sum + 1 << endl;
		for (int i = sum - 1; i >= 0; i--) cout << ASS[i] << " ";
		cout << n << endl;
	}  else
		{ cout << "NO" << endl ;
	} return 0;
}
