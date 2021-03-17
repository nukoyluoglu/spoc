#include <bits/stdc++.h>

using namespace std;

long long i, j, k, n, m, a[100009], ans, sz, c1, c2, x, ch[26], f, z;
int main() 
	{ string s;
	cin >> k >> s;
	sz = s.size();
	set<char> st;
	set<char>::iterator it;
	for (i = 0; i < sz; i++) 
		{ st.insert(s[i]);
		ch[s[i] - 'a']++;
	}
	vector<long long> v;
	for (it = st.begin(); it != st.end(); it++) 
		{ char c;
		c = *it;
		v.push_back(ch[c - 'a']);
	}
	sz = v.size();
	for (i = 0; i < sz; i++) 
		{ if (v[i] % k != 0) 
			{ f = 1;
			break;
		}
	}
	if (f) 
		{ cout << "-1" << endl;
		return 0;
	}  else 
		{ string ss;
		for (it = st.begin(); it != st.end(); it++) 
			{ char c;
			c = *it;
			z = ch[c - 'a'] / k;
			for (i = 0; i < z; i++) ss += c;
		}
		for (i = 0; i < k; i++) cout << ss;
		cout << endl ;
	}
	return 0;
}
