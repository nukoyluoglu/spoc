#include <bits/stdc++.h>

using namespace std;

string str(int n) 
	{ stringstream ss;
	ss << n;
	string s;
	ss >> s;
	return s;
}
int sorte[1001];
int tam = 0;
void lucky() 
	{ for (int i = 0; i < 1001; i++) 
		{ string s = str(i);
		bool sorte2 = true;
		for (int c = 0; c < s.length(); c++) 
			{ if (s[c] != '4' && s[c] != '7') 
				{ sorte2 = false;
				break;
			}
		}
		if (sorte2) 
			{ sorte[tam] = i;
			tam++;
		}
	}
}
int main() 
	{ lucky();
	int n;
	cin >> n;
	int pos = 0;
	bool divide = false;
	while (sorte[pos] <= n && pos < tam) 
		{ if (n % sorte[pos] == 0) 
			{ divide = true;
			break;
		}
		pos++;
	}
	if (divide) 
		{ cout << "YES\n";
	}  else 
		{ cout << "NO\n" ;

	}
	return 0;
}
