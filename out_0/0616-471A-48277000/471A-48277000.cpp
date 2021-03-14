#include <bits/stdc++.h>

using namespace std;

map<int, int> mp;
int main() 
	{ for (int i = 0; i < 6; i++) 
		{ int p;
		cin >> p;
		mp[p]++;
	}
	if (mp.size() > 3) 
		{ cout << "Alien" << endl;
		return 0;
	}
	if (mp.size() == 3) 
		{ int f = 0;
		map<int, int>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++) 
			{ if (it->second == 4) 
				{ f = 1;
				break;
			}
		}
		if (f) 
			{ cout << "Bear" << endl;
			return 0;
		}  else 
			{ cout << "Alien" << endl;
			return 0;
		}
	}
	if (mp.size() == 2) 
		{ int f = 0;
		map<int, int>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++) 
			{ if (it->second == 2) 
				{ f = 1;
				break;
			}
			if (it->second == 3) 
				{ cout << "Alien" << endl;
				return 0;
			}
		}
		if (f) 
			{ cout << "Elephant" << endl;
			return 0;
		}  else 
			{ cout << "Bear" << endl;
			return 0;
		}
	}
	if (mp.size() == 1) 
		{ puts ( "Elephant" ) ;

		return 0;
	}
	return 0;
}
