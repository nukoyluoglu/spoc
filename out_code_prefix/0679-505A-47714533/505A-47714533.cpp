#include <bits/stdc++.h>

using namespace std;

int check(string s, int i, int j) 
	{ int l = i, r = j;
	while (l < r) 
		{ if (s[l] == s[r]) 
			{ l++;
			r--;
			continue;
		}  else
			{ return 0;
	} }
	return 1;
}
int main() 
	{ string s;
	cin >> s;
	int i, n = s.length(), j;
	i = 0;
	j = n - 1;
	while (i < j) 
		{ if (s[i] != s[j]) 
			{ if (i + 1 == j) 
				{ s.insert(s.begin() + j + 1, s[i]);
				cout << s << endl;
				return 0;
			}  else 
				{ if (check(s, i + 1, j)) 
					{ s.insert(s.begin() + j + 1, s[i]);
					cout << s << endl;
					return 0;
				}  else if (check(s, i, j - 1)) 
					{ s.insert(s.begin() + i, s[j]);
					cout << s << endl;
					return 0;
				}  else 
					{ cout << "NA" << endl;
					return 0;
				}
			}
		}  else 
			{ i++;
			j--;
		}
	}
	if (s.length() % 2 == 0) 
		{ s.insert(s.begin() + n / 2, 'a');
		cout << s << endl;
		return 0;
	}  else 
		{ s.insert(s.begin() + n / 2 + 1, s[n / 2]);
		cout << s << endl ;

		return 0;
	}
}
