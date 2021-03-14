#include <bits/stdc++.h>

using namespace std;

int n;
string t;
int k;
int ans_len;
char str[20 * 100010];
int chars[80 * 100010];
void push_up(int rt) 
	{ chars[rt] = chars[rt << 1] + chars[rt << 1 | 1];
}
void update(int L, int R, int left, int right, int rt) 
	{ if (chars[rt] >= right - left + 1) return;
	if (left == right) 
		{ chars[rt] = 1;
		str[left] = t[left - L];
		return;
	}
	if (L > right || R < left) return;
	int mid = (left + right) >> 1;
	if (mid >= R)
		{ update(L, R, left, mid, rt << 1);
	} else if (mid < L)
		{ update(L, R, mid + 1, right, rt << 1 | 1);
	} else 
		{ update(L, R, left, mid, rt << 1);
		update(L, R, mid + 1, right, rt << 1 | 1);
	}
	push_up(rt);
}
int main() 
	{ int pos;
	int endpos;
	while (cin >> n) 
		{ ans_len = 0;
		for (int i = 1; i < 2000010; i++) str[i] = 'a';
		memset(chars, 0, sizeof(chars));
		for (int i = 1; i <= n; i++) 
			{ cin >> t >> k;
			for (int j = 1; j <= k; j++) 
				{ cin >> pos;
				endpos = pos + t.length() - 1;
				update(pos, endpos, 1, 2000010, 1);
				if (j == k) 
					{ if (endpos > ans_len) ans_len = endpos;
				}
			}
		}
		for (int i = 1; i <= ans_len; i++) cout << str[i];
		cout << endl ;

	}
}
