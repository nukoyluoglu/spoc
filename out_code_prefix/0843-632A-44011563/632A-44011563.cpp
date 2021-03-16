#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, p;
	cin >> n >> p;
	long long int cost = 0;
	string arr[n];
	for (long long int i = 0; i < n; i++) { cin >> arr[i]; }
	long long int num = 0;
	for (long long int i = n - 1; i >= 0; i--) 
		{ if (arr[i] == "halfplus")
			{ num = (num * 2) + 1;
		} else
			{ num = (num * 2);
	} }
	for (long long int i = 0; i < n; i++) 
		{ if (arr[i] == "halfplus") 
			{ cost += (num / 2) * p + (p / 2);
			num = num - (num / 2) - 1;
		}  else 
			{ cost += (num / 2) * p;
			num = num - (num / 2);
		}
	}
	cout << cost << endl ;

}
