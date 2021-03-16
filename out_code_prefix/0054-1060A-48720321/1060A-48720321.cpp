#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, num8, numn, num;
	char str[101];
	while (cin >> n) 
		{ num8 = 0;
		cin >> str;
		for (int i = 0; i < n; i++)
			{ if (str[i] == '8') num8++;
		} numn = n / 11;
		if (num8 > numn)
			{ num = numn;
		} else
			{ num = num8;
		} cout << num << endl ;

	}
	return 0;
}
