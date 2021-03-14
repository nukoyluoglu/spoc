#include <bits/stdc++.h>

using namespace std;

int sum(int n) 
	{ int s = (n * (n + 1)) / 2;
	return s;
}
int main() 
	{ int n;
	cin >> n;
	int i = 0;
	int s = 0;
	while (true) 
		{ s = s + sum(i);
		if (s > n) 
			{ break;
		}  else 
			{ i++;
		}
	}
	cout << i - 1 << endl ;

}
