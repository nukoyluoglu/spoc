#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str[41];
	int n, p, i, flag = 0;
	long long a = 0;
	cin >> n >> p;
	for (i = 1; i <= n; i++) { cin >> str[i]; }
	if (str[i - 1] == "halfplus") 
		{ a += p / 2;
		flag++;
	}
	for (int j = i - 2; j > 0; j--) 
		{ if (str[j] == "halfplus") 
			{ a = a + (a + flag * p / 2 + p / 2);
			flag++;
		}
		if (str[j] == "half") { a = a + (a + flag * p / 2); }
	}
	cout << a << endl ;

}
