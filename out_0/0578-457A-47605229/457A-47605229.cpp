#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int main() 
	{ getline(cin, s1);
	getline(cin, s2);
	int sz1 = s1.size();
	int sz2 = s2.size();
	bool swaped = 0;
	if (sz1 < sz2) 
		{ swap(s1, s2);
		swap(sz1, sz2);
		swaped = 1;
	}
	if (sz1 > sz2) 
		{ string aux = "";
		for (int i = 1; i + sz2 <= sz1; ++i) { aux += "0"; }
		s2 = aux + s2;
	}
	s1 = "0" + s1;
	s2 = "0" + s2;
	sz1++;
	for (int i = 1; i + 1 < sz1; ++i) 
		{ if (s1[i] == '1' and s1[i + 1] == '1') 
			{ s1[i - 1] = '1';
			s1[i] = '0';
			s1[i + 1] = '0';
			int j = i - 2;
			while (j - 1 >= 0 and s1[j] == '1') 
				{ s1[j - 1] = '1';
				s1[j] = '0';
				s1[j + 1] = '0';
				j -= 2;
			}
		}
		if (s2[i] == '1' and s2[i + 1] == '1') 
			{ s2[i - 1] = '1';
			s2[i] = '0';
			s2[i + 1] = '0';
			int j = i - 2;
			while (j - 1 >= 0 and s2[j] == '1') 
				{ s2[j - 1] = '1';
				s2[j] = '0';
				s2[j + 1] = '0';
				j -= 2;
			}
		}
	}
	for (int i = 0; i < sz1; ++i) 
		{ if (s1[i] > s2[i]) 
			{ if (!swaped) 
				{ cout << '>' << '\n';
			}  else 
				{ cout << '<' << '\n';
			}
			return 0;
		}  else if (s1[i] < s2[i]) 
			{ if (!swaped) 
				{ cout << '<' << '\n';
			}  else 
				{ cout << '>' << '\n';
			}
			return 0;
		}
	}
	cout <<'='<< endl ;

	return 0;
}
