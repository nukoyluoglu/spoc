#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str;
	cin >> str;
	int len = str.length();
	int a = 0, c = 0;
	for (int i = 0; i < len; i++) 
		{ if (str[i] == '0') 
			{ if (a == 0) 
				{ a = 1;
				puts("1 1");
			}  else 
				{ a = 0;
				puts("3 1");
			}
		}
		if (str[i] == '1') 
			{ if (c == 0) 
				{ c = 1;
				puts("4 3");
			}  else 
				{ c = 0;
				puts ( "41" ) ;

			}
		}
	}
	return 0;
}
