#include <bits/stdc++.h>

using namespace std;

int mp[20];
int main() 
	{ int n;
	vector<int> Q;
	memset(mp, 0, sizeof mp);
	for (int i = 1; i <= 6; i++) 
		{ int p;
		cin >> p;
		mp[p]++;
		Q.push_back(p);
	}
	int flag1 = 0, flag2 = 0;
	for (int i = 0; i < Q.size(); i++) 
		{ if (mp[Q[i]] >= 4) { flag1 = 1; }
		if (mp[Q[i]] == 2) { flag2 = 1; }
		if (mp[Q[i]] == 6) 
			{ flag1 = 1;
			flag2 = 1;
		}
	}
	if (flag1 == 1 and flag2 == 0) 
		{ cout << "Bear\n";
	}  else if (flag1 == 1 and flag2 == 1) 
		{ cout << "Elephant\n";
	}  else 
		{ cout << "Alien\n" ;
	}
	return 0;
}
