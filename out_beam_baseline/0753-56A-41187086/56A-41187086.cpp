#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, j, l, test = 0, ans, len;
	char str[1003], ch;
	double maps = 0, k;
	cin >> l;
	for (i = 0; i < l; i++) 
		{ cin >> str;
		if (strcmp(str, "ABSINTH") == 0) 
			{ test++;
		}  else if (strcmp(str, "BEER") == 0) 
			{ test++;
		}  else if (strcmp(str, "BRANDY") == 0) 
			{ test++;
		}  else if (strcmp(str, "CHAMPAGNE") == 0) 
			{ test++;
		}  else if (strcmp(str, "GIN") == 0) 
			{ test++;
		}  else if (strcmp(str, "RUM") == 0) 
			{ test++;
		}  else if (strcmp(str, "SAKE") == 0) 
			{ test++;
		}  else if (strcmp(str, "TEQUILA") == 0) 
			{ test++;
		}  else if (strcmp(str, "VODKA") == 0) 
			{ test++;
		}  else if (strcmp(str, "WHISKEY") == 0) 
			{ test++;
		}  else if (strcmp(str, "WINE") == 0) 
			{ test++;
		}  else if (str[0] >= 48 && str[0] <= 57) 
			{ len = strlen(str);
			k = 0;
			maps = 0;
			for (j = len - 1; j >= 0; j--) 
				{ str[j] = str[j] - '0';
				maps = maps + (str[j] * pow(10.0, k));
				k++;
			}
			ans = (int)maps;
			if (ans < 18) { test++; }
		}
	}
	cout << test << endl ;
}
