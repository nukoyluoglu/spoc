#include <bits/stdc++.h>

using namespace std;

const int N = 100 + 5;
const int mod = 1000000000 + 7;
bool ok(char a) 
	{ if (a >= 'a' && a <= 'z') return 1;
	if (a >= 'A' && a <= 'Z') return 1;
	if (a >= '0' && a <= '9') return 1;
	if (a == '_') return 1;
	return 0;
}
int main() 
	{ char a[N];
	cin >> a + 1;
	int len = strlen(a + 1);
	int op = 1;
	bool flag = 1;
	int cnt1 = 0, cnt2 = 0, ccnt = 0, cnt3 = 0;
	for (int i = 1; i <= len && flag; i++) 
		{ if (op == 1) 
			{ cnt1++;
			if (a[i] == '@') 
				{ cnt1--;
				op = 2;
				continue;
			}
			if (!ok(a[i])) { flag = 0; }
			if (cnt1 > 16) flag = 0;
		}  else if (op == 2) 
			{ ccnt++;
			if (cnt1 == 0 || cnt1 > 16) flag = 0;
			if (a[i] == '.') 
				{ if (cnt2 == 0 || cnt2 > 16) flag = 0;
				cnt2 = 0;
				continue;
			}
			if (a[i] == '/') 
				{ ccnt--;
				op = 3;
				continue;
			}
			if (!ok(a[i])) { flag = 0; }
			cnt2++;
			if (cnt2 > 16) flag = 0;
		}  else 
			{ if (cnt2 == 0 || cnt2 > 16) flag = 0;
			if (ccnt == 0 || ccnt > 32) flag = 0;
			if (!ok(a[i])) flag = 0;
			cnt3++;
			if (cnt3 > 16) flag = 0;
		}
	}
	if (op == 1) flag = 0;
	if (op == 2 && (cnt2 == 0 || cnt2 > 16)) flag = 0;
	if (op == 3 && (cnt3 == 0 || cnt3 > 16)) flag = 0;
	if (flag)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;
	} return 0;
}
