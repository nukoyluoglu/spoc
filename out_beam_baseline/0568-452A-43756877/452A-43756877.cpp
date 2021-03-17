#include <bits/stdc++.h>

using namespace std;

pair<int, int> par[10001];
set<string> str;
int main() 
	{ string s;
	int n, i;
	cin >> n >> s;
	if (n == 8)
		{ cout << "vaporeon" << endl;
	} else if (n == 6)
		{ cout << "espeon" << endl;
	} else if (n == 7) 
		{ if (s[0] == '.') 
			{ if (s[1] == 'o') 
				{ cout << "jolteon" << endl;
				return 0;
			}
			if (s[1] == 'm') 
				{ cout << "umbreon" << endl;
				return 0;
			}
			if (s[1] == 'e') 
				{ cout << "leafeon" << endl;
				return 0;
			}
			if (s[1] == 'y') 
				{ cout << "sylveon" << endl;
				return 0;
			}
			if (s[1] == 'l') 
				{ if (s[3] == 'r') 
					{ cout << "flareon" << endl;
					return 0;
				}  else 
					{ cout << "glaceon" << endl;
					return 0;
				}
			}
			if (s[1] == '.') 
				{ if (s[2] == 'b') 
					{ cout << "umbreon" << endl;
					return 0;
				}
				if (s[2] == 'l') 
					{ if (s[3] == 't') 
						{ cout << "jolteon" << endl;
						return 0;
					}  else 
						{ cout << "sylveon" << endl;
						return 0;
					}
				}
				if (s[2] == 'a') 
					{ if (s[3] == 'r') 
						{ cout << "flareon" << endl;
						return 0;
					}
					if (s[3] == 'c') 
						{ cout << "glaceon" << endl;
						return 0;
					}  else 
						{ cout << "leafeon" << endl;
						return 0;
					}
				}
				if (s[2] == '.') 
					{ if (s[3] == 'r') 
						{ cout << "flareon" << endl;
						return 0;
					}
					if (s[3] == 'c') 
						{ cout << "glaceon" << endl;
						return 0;
					}
					if (s[3] == 'f') 
						{ cout << "leafeon" << endl;
						return 0;
					}
					if (s[3] == 't') 
						{ cout << "jolteon" << endl;
						return 0;
					}
					if (s[3] == 'v') 
						{ cout << "sylveon" << endl;
						return 0;
					}  else 
						{ cout << "umbreon" << endl;
						return 0;
					}
				}
			}
		}
		if (s[0] == 'j') 
			{ cout << "jolteon" << endl;
			return 0;
		}
		if (s[0] == 'f') 
			{ cout << "flareon" << endl;
			return 0;
		}
		if (s[0] == 'u') 
			{ cout << "umbreon" << endl;
			return 0;
		}
		if (s[0] == 'l') 
			{ cout << "leafeon" << endl;
			return 0;
		}
		if (s[0] == 'g') 
			{ cout << "glaceon" << endl;
			return 0;
		}
		if (s[0] == 's') 
			{ cout << "sylveon" << endl ;
			return 0;
		}
	}
	return 0;
}
