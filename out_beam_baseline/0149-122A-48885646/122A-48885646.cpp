#include <bits/stdc++.h>

using namespace std;

int getdigits(int n) 
	{ int c = 0;
	while (n != 0) 
		{ n /= 10;
		c++;
	}
	return c;
}
int main() 
	{ int n, d, i, flag = 0;
	;
	cin >> n;
	d = getdigits(n);
	if (n % 4 == 0) 
		{ flag = 1;
	}  else if (n % 7 == 0) 
		{ flag = 1;
	}  else if (n % 47 == 0) 
		{ flag = 1;
	}  else if (n % 477 == 0) 
		{ flag = 1;
	}  else if (n % 447 == 0) 
		{ flag = 1;
	}  else if (n % 474 == 0) 
		{ flag = 1;
	}  else if (n % 744 == 0) 
		{ flag = 1;
	}  else if (n % 747 == 0) 
		{ flag = 1;
	}  else if (n % 774 == 0) 
		{ flag = 1;
	}
	if (flag)
		{ cout << "YES"
			{ << "\n";
	} } else
		{ cout << "NO"
			{ ;

	} } return 0;
}
