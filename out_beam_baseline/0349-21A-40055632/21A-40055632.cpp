#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, j, flag = 1, dot = 0;
	string ch;
	cin >> ch;
	for (i = 0; i < ch.length(); i++) 
		{ if (ch[i] == '@') 
			{ if (i > 16 || i < 1) 
				{ flag = 0;
				goto print;
			}
			break;
		}  else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
			{ continue;
		} else if ((ch[i] >= '0' && ch[i] <= '9') || (ch[i] == '_'))
			{ continue;
		} else 
			{ flag = 0;
			goto print;
		}
	}
} dot:
	{ for (j = i + 1; j < ch.length(); j++) 
		{ if (ch[j] == '.') 
			{ if (j - i > 17 || j - i < 2) 
				{ flag = 0;
				goto print;
			}
			i = j;
		}  else if ((ch[j] >= 'a' && ch[j] <= 'z') || (ch[j] >= 'A' && ch[j] <= 'Z'))
			{ continue;
		} else if ((ch[j] >= '0' && ch[j] <= '9') || (ch[j] == '_'))
			{ continue;
		} else if (ch[j] == '/') 
			{ if (j - i > 17 || j - i < 2) 
				{ flag = 0;
				goto print;
			}
			i = j;
		}  else 
			{ flag = 0;
			goto print;
		}
	}
	if (j - i > 17 || j - i < 2) flag = 0;
} print:
	{ cout << ( flag? "YES\n" :'NO\n') * n ;

	return 0;
}
