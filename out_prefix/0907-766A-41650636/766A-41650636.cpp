#include <bits/stdc++.h>

using namespace std;

const double E = exp(1);
const int maxn = 1e6 + 10;
char ch[maxn];
char ch1[maxn];
int main() 
	{ cin >> ch;
	cin >> ch1;
	int l1 = strlen(ch);
	int l2 = strlen(ch1);
	if (strcmp(ch, ch1) == 0)
		{ cout << -1 << endl;
	} else
		{ cout << max ( l1, l2 ) << endl ;

	} return 0;
}
